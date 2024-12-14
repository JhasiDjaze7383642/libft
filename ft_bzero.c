/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:18:28 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 07:18:29 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*object;
	size_t	pos;

	object = s;
	pos = 0;
	while (pos < n)
	{
		*(object + pos) = '\0';
		pos++;
	}
}
