#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*res;

	if(!(res = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(res, '\0', size + 1);
	return (res);
}