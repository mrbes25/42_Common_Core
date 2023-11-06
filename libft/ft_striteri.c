header

include "libft.h"

void	ft_striteri(char*s,void(*f)(unsignedint, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i])
		i++;
	}
}