/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:11:52 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 11:21:52 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*buf;
	t_list	*hold_adr;

	if (!lst || !*lst)
		return ;
	buf = *lst;
	hold_adr = buf->next;
	while (buf)
	{
		hold_adr = buf->next;
		if (buf->content)
			(del)(buf->content);
		free(buf);
		buf = hold_adr;
	}
	*lst = NULL;
}
