#include "libft.h"

int		mylen(int n)
{
	int 	tmp;
	int 	len;

	tmp = n;
	len = 1;
	while (tmp / 10 != 0)
	{
		tmp /= 10;
		len++;
	}
	return ((n < 0) ? len + 1 : len);
}


char	*ft_itoa(int n)
{
	int		len;
	char	*res;

	len = mylen(n);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res[len] = '\0';
	if (n < 0)
		res[0] = '-';
	len -=1;
	while(n / 10 != 0)
	{
		res[len] = ((n < 0) ? -(n % 10) : (n % 10)) + '0';
		n /= 10;
		len--;
	}
	res[len] = ((n < 0) ? -(n) : n) + '0';
	return (res);
}