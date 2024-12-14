/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:12:34 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 10:59:57 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			pos;
	unsigned char	*str;
	unsigned char	character;

	pos = 0;
	str = (unsigned char *) s;
	character = (unsigned char) c;
	if (!s)
		return (NULL);
	while (pos < n)
	{
		if (*(str + pos) == character)
			return (str + pos);
		pos++;
	}
	return (NULL);
}
