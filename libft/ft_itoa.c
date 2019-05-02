#include "libft.h"

int		mylen(int n)
{
	int 	tmp;
	int 	len;

	tmp = n;
	len = 0;
	while (tmp)
	{
		tmp /= 10;
		len++;
	}
	return (len);
}

void	mynegative(int *n, int *len, char *sign)
{
	*sign = 'p';

	if (*n < 0)
	{
		(*len)++;
		*sign = 'n';
		*n *= -1;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	sign;
	char	*res;

	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	len = mylen(n);
	mynegative(&n, &len, &sign);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res[len] = '\0';
	while(n)
	{
		res[--len] = n % 10 + '0';
		n /= 10;
	}
	if (sign == 'n')
		res[0] = '-';
	return (res);
}