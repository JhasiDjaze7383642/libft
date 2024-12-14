/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:17:49 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 10:49:51 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	pos;

	d = (char *) dest;
	s = (char *) src;
	pos = 0;
	if (!d && !s)
		return (NULL);
	while (pos < n)
	{
		*((char *) dest + pos) = *((char *) src + pos);
		pos++;
	}
	return (dest);
}
