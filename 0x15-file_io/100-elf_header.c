#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: command line arguments
 *
 * Description: a program to display information from an ELF header
 *		USAGE: elf_header elf_filename
 *		DISPLAYED INFO: magic, class, data, version, OS/ABI
 *				ABI version, type, entry point address
 *		FORMAT: same as readelf -h
 *		lseek can be used only once
 *		read can be used a maximum of 2 times at runtime
 *		printf is allowed
 *
 * Return: 0 (success), if file is not ELF, exit with status of 98
 */
int main(int argc, char **argv)
{
	Elf64_Ehdr *header;
	size_t read_count;
	int fd, close_status;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
		exit(98);

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Cannot open file: %s\n", argv[1]);
		exit(98);
	}

	read_count = read(fd, header, sizeof(Elf64_Ehdr));
	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Cannot read file: %s\n", argv[1]);
		exit(98);
	}
	check_file(header);
	process_info(header);

	free(header);
	close_status = close(fd);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Cannot close file descriptor\n");
		exit(98);
	}

	return (0);
}

/**
 * check_file - check whether a file is ELF or not
 *
 * @header: an ELF64 header
 *
 */
void check_file(Elf64_Ehdr *header)
{
	int i;

	if (header->e_ident[0] == 0x7f && header->e_ident[1] == 'E' &&
		header->e_ident[2] == 'L' && header->e_ident[3] == 'F')
	{
		printf("ELF Header:\n  Magic:   ");
		for (i = 0; i < 16; ++i)
			printf("%02x ", header->e_ident[i]);
		printf("\n");

	}
	else
	{
		dprintf(STDERR_FILENO, "Not an ELF file!!\n");
		exit(98);
	}
}

/**
 * process_info - a function to call all the other functions to process header
 *
 * @header: pointer to an ELF header
 *
 */
void process_info(Elf64_Ehdr *header)
{
	class(header);
	data(header);
	version(header);
	os_abi(header);
	abi_version(header);
	type(header);
	entry_point(header);
}

/**
 * class - print architecture of the binary
 *
 * @header: pointer to an ELF header
 *
 */
void class(Elf64_Ehdr *header)
{
	printf("  %-35s", "Class:");
	if (header->e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("ELF32\n");
}

/**
 * data - print the data encoding information of the file
 *
 * @header: pointer to an ELF header
 *
 */
void data(Elf64_Ehdr *header)
{
	printf("  %-35s", "Data:");
	if (header->e_ident[EI_DATA] == ELFDATANONE)
		printf("Unknown data format\n");
	else if (header->e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else
		printf("2's complement, big endian\n");
}

/**
 * version - print version number of the ELF specification
 *
 * @header: pointer to an ELF header
 *
 */
void version(Elf64_Ehdr *header)
{
	printf("  %-35s", "Version:");
	if (header->e_ident[EI_VERSION] == EV_CURRENT)
		printf("1 (current)\n");
	else
		printf("0 (invalid)\n");
}

/**
 * os_abi - print the os and ABI to which the file is targeted
 *
 * @header: pointer to an ELF header
 *
 */
void os_abi(Elf64_Ehdr *header)
{
	printf("  %-35s", "OS/ABI:");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64 UNIX\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Stand-alone (embedded)\n");
			break;
		default:
			break;
	}
}

/**
 * abi_version - print the ABI version
 *
 * @header: pointer to an ELF header
 *
 */
void abi_version(Elf64_Ehdr *header)
{
	printf("  %-35s", "ABI Version");
	if (header->e_ident[EI_ABIVERSION] == 0)
		printf("0\n");
	else
		printf("1\n");
}

/**
 * type - print the file type
 *
 * @header: pointer to an ELF header
 *
 */
void type(Elf64_Ehdr *header)
{
	printf("  %-35s", "Type:");
	switch (header->e_type)
	{
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;
		default:
			break;
	}
}

/**
 * entry_point - print the virtual address to which
 * the system first transfers control
 *
 * @header: pointer to an ELF header
 *
 */
void entry_point(Elf64_Ehdr *header)
{
	printf("  %-35s", "Entry point address:");
	if (header->e_entry)
		printf("0x%x\n", (unsigned int)header->e_entry);
	else
		printf("0\n");
}
