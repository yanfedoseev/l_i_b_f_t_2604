/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:19:23 by gmarin            #+#    #+#             */
/*   Updated: 2019/05/02 17:19:25 by gmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD
=======

int		mylen(int n)
{
	int 	tmp;
	int 	len;

	tmp = n;
	len = 1;
	while (tmp / 10 != 0)
	{
		tmp /= 10;
		len++;
	}
	return ((n < 0) ? len + 1 : len);
}

>>>>>>> d8096c0ee8d4956432a6d2777cef3b4d77a0db1d

char	*ft_itoa(int n)
{
	int		len;
	char	*res;

<<<<<<< HEAD
	len = ft_nmbrlen(n);
=======
	len = mylen(n);
>>>>>>> d8096c0ee8d4956432a6d2777cef3b4d77a0db1d
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res[len] = '\0';
	if (n < 0)
		res[0] = '-';
	len -=1;
	while(n / 10 != 0)
	{
		res[len] = ((n < 0) ? -(n % 10) : (n % 10)) + '0';
		n /= 10;
		len--;
	}
	res[len] = ((n < 0) ? -(n) : n) + '0';
	return (res);
}
