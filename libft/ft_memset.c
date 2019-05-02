#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *res;

	res = (unsigned char *)s;
	while (n--)
		*res++ = (unsigned char) c;
	return (s);
}