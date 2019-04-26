#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);

	if (c == '\0')
		return ((char*)s + i);
	while (i--)
	{
		if (s[i] == (char)c)
			return ((char*)s + i);
	}
	return (NULL);
}