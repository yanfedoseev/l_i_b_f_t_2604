#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	while (n--)
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}