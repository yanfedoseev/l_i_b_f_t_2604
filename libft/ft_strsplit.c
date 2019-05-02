/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:31:45 by gmarin            #+#    #+#             */
/*   Updated: 2019/05/02 17:31:47 by gmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_words(char const *str, char c)
{
	int		j;

	j = 0;
	while (*str == c)
		str++;
	while (*str)
	{
		j++;
		while (*str != c && *str)
			str++;
		while (*str == c)
			str++;
	}
	return (j);
}

void	split(char const *str, char c, int *i)
{
	while (str[*i] == c)
		(*i)++;
}

char	*word(char const *str, char c, int *i)
{
	char	*wrd;
	int 	k;

	k = *i;
	while (str[k] != c && str[k] != '\0')
		k++;
	if(!(wrd = malloc(sizeof(char) * (k + 1))))
		return (NULL);
	k = 0;
	while (str[*i] != c && str[*i] != '\0')
		wrd[k++] = str[(*i)++];
	wrd[k] = '\0';
	return (wrd);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	int 	i;
	int 	j;

	if (s == NULL)
		return (NULL);
	if (!(res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	split(s, c, &i);
	while (s[i] != '\0')
	{
		res[j++] = word(s, c, &i);
		split(s, c, &i);
	}
	res[j] = NULL;
	return (res);
}
