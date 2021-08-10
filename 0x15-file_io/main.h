#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void check_file(Elf64_Ehdr *header);
void process_info(Elf64_Ehdr *header);
void class(Elf64_Ehdr *header);
void data(Elf64_Ehdr *header);
void version(Elf64_Ehdr *header);
void os_abi(Elf64_Ehdr *header);
void abi_version(Elf64_Ehdr *header);
void type(Elf64_Ehdr *header);
void entry_point(Elf64_Ehdr *header);

#endif
