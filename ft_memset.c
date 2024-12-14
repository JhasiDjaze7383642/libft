/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:13:50 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 07:13:50 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*object;
	size_t	pos;

	object = s;
	pos = 0;
	while (pos < n)
	{
		*(object + pos) = c;
		pos++;
	}
	return (s);
}
