#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(dest);
	while (*src && i < size)
		dest[i++] = *src++;
	dest[i] = '\0';
	if (i <= size)
		return (i);
	else
		return (size + ft_strlen(src));
}