/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:28:43 by gmarin            #+#    #+#             */
/*   Updated: 2019/05/02 17:28:45 by gmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = ft_strlen(dest);
<<<<<<< HEAD
	if (i > size)
		i = size;
	j = 0;
	while (src[j] && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	return (ft_strlen(src) + i);
}
=======
	while (*src && i < size)
		dest[i++] = *src++;
	dest[i] = '\0';
	if (i <= size)
		return (i);
	else
		return (size + ft_strlen(src));
}
>>>>>>> d8096c0ee8d4956432a6d2777cef3b4d77a0db1d
