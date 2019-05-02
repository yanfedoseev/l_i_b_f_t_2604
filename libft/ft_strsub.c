#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*res;

	if(!(res = ft_strnew(len)))
		return (NULL);
	while (len--)
		res[len] = s[start + len];
	return (res);
}