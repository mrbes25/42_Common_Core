#include "ft_printf.h"

int main(void)
{
	int	counter;
	double	test;

	test = 2676.8;
	counter = ft_printf("%d\n", test);
	return (0);
}