/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 16:17:09 by ovisky            #+#    #+#             */
/*   Updated: 2015/03/11 16:17:17 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*ret_first;
	t_list	*ret_prev;

	ret_first = NULL;
	while (lst != NULL)
	{
		ret = (t_list *)ft_memalloc(sizeof(*ret));
		if (ret == NULL)
			return (NULL);
		if (ret_first == NULL)
			ret_first = ret;
		ft_memcpy(ret, (*f)(lst), sizeof(t_list));
		ret_prev->next = ret;
		ret_prev = ret;
		lst = lst->next;
	}
	return (ret_first);
}
