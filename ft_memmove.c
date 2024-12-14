/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:14:22 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 10:18:28 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	c;
	size_t	pos;

	if (!(char *)dest || !(char *)src)
		return (NULL);
	c = '\0';
	pos = 0;
	if (dest > src)
		while (n-- > (size_t)0)
			*((char *)dest + n) = *((char *)src + n);
	else
	{
		while (pos < n)
		{
			c = *((char *)src + pos);
			*((char *)dest + pos) = c;
			pos++;
		}
	}
	return ((char *) dest);
}
