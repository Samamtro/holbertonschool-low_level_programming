#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
printf("Taille des types de base en octets :\\n");
printf("char: %lu octets\\n", sizeof(char));
printf("short: %lu octets\\n", sizeof(short));
printf("int: %lu octets\\n", sizeof(int));
printf("long: %lu octets\\n", sizeof(long));
printf("long long: %lu octets\\n", sizeof(long long));
printf("float: %lu octets\\n", sizeof(float));
printf("double: %lu octets\\n", sizeof(double));
printf("long double: %lu octets\\n", sizeof(long double));
return (0);
}
