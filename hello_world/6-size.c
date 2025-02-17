#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
printf("Taille des types de base en octets :\n");
printf("char: %zu octets\n", sizeof(char));
printf("short: %zu octets\n", sizeof(short));
printf("int: %zu octets\n", sizeof(int));
printf("long: %zu octets\n", sizeof(long));
printf("long long: %zu octets\n", sizeof(long long));
printf("float: %zu octets\n", sizeof(float));
printf("double: %zu octets\n", sizeof(double));
printf("long double: %zu octets\n", sizeof(long double));
return (0);
}
