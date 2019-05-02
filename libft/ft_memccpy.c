#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*mydest;
	unsigned char	*mysrc;

	mydest = (unsigned char *)dest;
	mysrc = (unsigned char *)src;
	while (*mysrc != c && n--)
	{
		*mydest++ = *mysrc++;
	}
	if (n)
	{
		*mydest++ = *mysrc++;
		return ((void *)mydest);
	}
	return (NULL);
}