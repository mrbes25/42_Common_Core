#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int	counter;
	char	test[5] = "test";

	counter = ft_printf("%p\n", (void *)test);
	printf("%p\n", (void *)&test);
	return (0);
}