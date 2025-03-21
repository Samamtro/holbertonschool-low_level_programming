#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

typedef struct printer
{
	char *symbol;
	void (*print)(va_list);
} printer_t;

void print_char(va_list arg)
{
	char letter = va_arg(arg, int);
	printf("%c", letter);
}

void print_int(va_list arg)
{
	int num = va_arg(arg, int);
	printf("%d", num);
}

void print_float(va_list arg)
{
	double num = va_arg(arg, double);
	printf("%f", num);
}

void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *separator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != funcs[j].symbol[0]))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(args);
}

