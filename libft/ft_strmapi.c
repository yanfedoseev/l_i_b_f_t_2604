/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:29:25 by gmarin            #+#    #+#             */
/*   Updated: 2019/05/02 17:29:26 by gmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	if (!(res = ft_strnew(ft_strlen(s))))
		return (NULL);
<<<<<<< HEAD
	if (s && f)
	{
		i = -1;
		while (s[++i])
			res[i] = f(i, s[i]);
		return (res);
	}
	return (NULL);
=======
	i = -1;
	while (s[++i])
		res[i] = f(i, s[i]);
	return (res);
>>>>>>> d8096c0ee8d4956432a6d2777cef3b4d77a0db1d
}
