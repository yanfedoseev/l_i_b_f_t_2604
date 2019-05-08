/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:30:21 by gmarin            #+#    #+#             */
/*   Updated: 2019/05/02 17:30:23 by gmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
<<<<<<< HEAD
	if (s1 != NULL && s2 != NULL)
		return (!(ft_strncmp(s1, s2, n)));
	return (0);
=======
	return (!(ft_strncmp(s1, s2, n)));
>>>>>>> d8096c0ee8d4956432a6d2777cef3b4d77a0db1d
}
