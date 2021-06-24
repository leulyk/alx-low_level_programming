#include <stdio.h>
#include <math.h>

int is_prime(long num);
/**
 * main - largest prime factor of the number 612852475143
 * 
 */
int main(void)
{
    long int num, i, maxprime;
    
    num = 612852475143;
    maxprime = 2;
    for (i = 2; i <= num; ++i)
    {
        if (num % i == 0)
        {
            if (is_prime(i))
            {
                if (i > maxprime)
                {
                    maxprime = i;
                }
            }
        }
    }
    printf("%li\n", maxprime);
    return (0);
}

int is_prime(long num)
{
    long i;
    
    for (i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
        {
            return (0);
        }
    }
    return (1);
}
