/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:20:26 by gmarin            #+#    #+#             */
/*   Updated: 2019/05/02 17:20:28 by gmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
<<<<<<< HEAD
	if (*alst && alst && del)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
=======
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
>>>>>>> d8096c0ee8d4956432a6d2777cef3b4d77a0db1d
}
