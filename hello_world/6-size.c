#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
    printf("Taille de char: %lu octet(s)\n", sizeof(char));
    printf("Taille de int: %lu octet(s)\n", sizeof(int));
    printf("Taille de long int: %lu octet(s)\n", sizeof(long int));
    printf("Taille de long long int: %lu octet(s)\n", sizeof(long long int));
    printf("Taille de float: %lu octet(s)\n", sizeof(float));
    return (0);
}
