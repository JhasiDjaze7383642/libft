/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:14:32 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 08:50:11 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new_list)
{
	t_list	*buf_storage;

	if (!lst)
	{
		*lst = new_list;
		return ;
	}
	if (lst && new_list)
	{
		buf_storage = *lst;
		*lst = new_list;
		(*lst)->next = buf_storage;
	}
}
