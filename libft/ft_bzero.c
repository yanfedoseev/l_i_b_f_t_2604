#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*res;

	res = (unsigned char *)s;
	while (n--)
		*res++ = 0;
}