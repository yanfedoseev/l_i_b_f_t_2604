#include "libft.h"
#include <stdio.h>

void	check_strcmp(void *str1, void *str2, char *fname)
{
	if (!(strcmp(str1, str2)))
		printf("OK - %s\n", fname);
	else
		printf("FAIL - %s\n", fname);
}

void	check_intcmp(int i1, int i2, char *fname)
{
	if (i1 == i2)
		printf("OK - %s\n", fname);
	else
		printf("FAIL - %s\n", fname);
}

void	check_sizetcmp(size_t i1, size_t i2, char *fname)
{
	if (i1 == i2)
		printf("OK - %s\n", fname);
	else
		printf("FAIL - %s\n", fname);
}

int	main(void)
{
	char	str1[64];
	char	str2[64];
	char	str3[64];
	char	*s1;
	char	*s2;
	int		i1;
	int 	i2;
	size_t	st1;
	size_t	st2;

	strcpy(str1, "0123456789");
	strcpy(str2, "0123456789");
	strcpy(str3, "0123abc");

	s1 = memset(str1, '$', 5);
	s2 = ft_memset(str2,'$',5);
	check_strcmp(s1, s2, "memset");

	bzero(str1, 3);
	ft_bzero(str2, 3);
	check_strcmp(str1, str2, "bzero");

	s1 = memcpy(str1, str3, 3);
	s2 = ft_memcpy(str2, str3, 3);
	check_strcmp(s1, s2, "memcpy");

	s1 = memccpy(str1, str3, 'b', 9);
	s2 = ft_memccpy(str2, str3, 'b', 9);
	check_strcmp(s1, s2, "memccpy");

	s1 = memmove(str1, str3, 7);
	s2 = ft_memmove(str2, str3, 7);
	check_strcmp(s1, s2, "memmove");

	s1 = memchr(str1, 'b', 12);
	s2 = ft_memchr(str2, 'b', 12);
	check_strcmp(s1, s2, "memchr");

	i1 = memcmp(str1, str3, 25);
	i2 = ft_memcmp(str1, str3, 25);
	check_intcmp(i1, i2, "memcmp");

	st1 = strlen(str1);
	st2 = ft_strlen(str2);
	check_sizetcmp(st1, st2, "strlen");

	s1 = strdup(str1);
	s2 = ft_strdup(str2);
	check_strcmp(s1, s2, "strdup");

	s1 = strcpy(str1, str3);
	s2 = ft_strcpy(str2, str3);
	check_strcmp(s1, s2, "strcpy");

	s1 = strcat(str1, str3);
	s2 = ft_strcat(str2, str3);
	check_strcmp(s1, s2, "strcat");

	s1 = strncat(str1, str3, 3);
	s2 = ft_strncat(str2, str3, 3);
	check_strcmp(s1, s2, "strncat");

	//st1 = strlcat(str1, str3, 33);
	//st2 = ft_strlcat(str2, str3, 33);
	//check_sizetcmp(st1, st2, "strlcat");

	s1 = strchr(str1, 98);
	s2 = ft_strchr(str2, 98);
	check_strcmp(s1, s2, "strchr");


	puts(str1);
	puts(str2);
	return (0);

}