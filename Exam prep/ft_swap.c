void    ft_swap(int *a, int *b)
{
	int buffer;
	buffer = *a;
	*a = *b;
	*b = buffer;
}

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	a = 1;
	b = 2;
	ft_swap(&a, &b);
	printf("a: %i\nb: %i\n", a, b);
	return (0);
}