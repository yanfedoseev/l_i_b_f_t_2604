#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	int 	i;
	int 	j;
	int 	k;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	if (i > j)
		return ("");
	if (!(res = ft_strnew(j - i + 1)))
		return (NULL);
	k = 0;
	while (i <= j)
		res[k++] = s[i++];
	return (res);
}