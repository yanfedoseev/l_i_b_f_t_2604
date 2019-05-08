/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:19:51 by gmarin            #+#    #+#             */
/*   Updated: 2019/05/02 17:19:53 by gmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
<<<<<<< HEAD
	if (new)
	{
		if (alst && *alst)
			new->next = *alst;
		else
			new->next = NULL;
		*alst = new;
	}
}
=======
	if (*alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
>>>>>>> d8096c0ee8d4956432a6d2777cef3b4d77a0db1d
