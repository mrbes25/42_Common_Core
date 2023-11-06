
#include	"libft.h"

char	*ft_itoa(int n)
{
	int		tmp;
	int		len;
	char	*str;

	tmp = n;
	len = 1;
	while (tmp >= 10)
	{
		tmp = tmp / 10;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n < 10)
		ft_str(n, str)
	if (n >= 10)
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10)
	}
	return (*str);
}