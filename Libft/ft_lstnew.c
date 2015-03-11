/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 16:17:31 by ovisky            #+#    #+#             */
/*   Updated: 2015/03/11 16:17:33 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*nod;

	nod = (t_list *)ft_memalloc(sizeof(*nod));
	if (nod == NULL)
		return (NULL);
	if (content == NULL)
	{
		nod->content = NULL;
		nod->content_size = 0;
	}
	else
	{
		if (!(nod->content = ft_memdup(content, content_size)))
		{
			return (NULL);
			free(nod);
		}
		nod->content_size = content_size;
	}
	nod->next = NULL;
	return (nod);
}
