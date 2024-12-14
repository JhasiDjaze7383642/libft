/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:12:14 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 11:23:40 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*buf;

	if (!lst)
		return ;
	buf = lst;
	while (buf->next)
	{
		if (buf->content)
			(f)(buf->content);
		buf = buf->next;
	}
	(f)(buf->content);
}
