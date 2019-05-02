#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	char	*str;
	char	*sub;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		str = (char *)haystack;
		sub = (char *)needle;
		while (*str == *sub && *sub)
		{
			str++;
			sub++;
		}
		if (!*sub)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}