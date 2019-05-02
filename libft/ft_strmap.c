#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	size_t	i;

	if (!(res = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = -1;
	while (s[++i])
		res[i] = f(s[i]);
	return (res);
}