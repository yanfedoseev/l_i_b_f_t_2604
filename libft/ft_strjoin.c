#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;

	if(!(res = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i])
		res[i] = s1[i];
	while (s2[j])
		res[i++] = s2[j++];
	return (res);
}