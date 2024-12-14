/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:12:25 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 07:12:26 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	char_to_copy;

	char_to_copy = 0;
	if (size > 0)
	{
		while (--size && *(src + char_to_copy))
		{
			*(dst + char_to_copy) = *(src + char_to_copy);
			char_to_copy++;
		}
		*(dst + char_to_copy) = '\0';
	}
	while (*(src + char_to_copy))
		char_to_copy++;
	return (char_to_copy);
}
