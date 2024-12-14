/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:18:23 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 10:55:36 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			pos;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	if (!s1 || !s2)
		return (-123456789);
	pos = 0;
	while (pos < n)
	{
		if (*(str1 + pos) != *(str2 + pos))
			return (*(str1 + pos) - *(str2 + pos));
		pos++;
	}
	return (0);
}
