#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*sub;
	size_t	tmp;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len)
	{
		str = (char *)haystack;
		sub = (char *)needle;
		tmp = len;
		while (*str == *sub && *sub && tmp)
		{
			str++;
			sub++;
			tmp--;
		}
		if (!*sub)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}