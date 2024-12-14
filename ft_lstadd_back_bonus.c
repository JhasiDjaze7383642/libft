/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:13:01 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 08:50:26 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_list)
{
	t_list	*temp_buf;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new_list;
		return ;
	}
	temp_buf = *lst;
	while (temp_buf->next)
		temp_buf = temp_buf->next;
	if (!temp_buf->next)
		temp_buf->next = new_list;
}
