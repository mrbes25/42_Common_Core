#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	size_t i;
	int counter;
	char test[68] = "test";
	int num = 42;
	double pi = 3.14159;

	void *pointers[] = {test, &num, &pi, NULL};
	char *names[] = {"char array", "int", "double", "NULL"};

	for (i = 0; i < sizeof(pointers) / sizeof(void *); i++)
	{
		printf("Testing %s pointer:\n", names[i]);
		counter = ft_printf("%p\n", pointers[i]);
		printf("ft_printf printed %d characters.\n", counter);
		printf("printf: %p\n", pointers[i]);
	}

	return (0);
}
