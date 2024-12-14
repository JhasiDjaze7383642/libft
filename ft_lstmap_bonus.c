/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:18:39 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 11:26:43 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*buf;
	t_list	*new;
	t_list	*ret;

	if (!lst)
		return (NULL);
	buf = lst;
	ret = 0;
	while (buf)
	{
		new = ft_lstnew((f)(buf->content));
		if (!new)
		{
			ft_lstclear(&ret, del);
			return (0);
		}
		if (!ret)
			ret = new;
		else
			ft_lstadd_back(&ret, new);
		buf = buf->next;
	}
	return (ret);
}
