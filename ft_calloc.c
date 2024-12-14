/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:18:10 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 10:04:46 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*allowed_memory;
	size_t	pos;

	if ((int)nmemb < 0 && (int)size < 0)
		return (0);
	if (((int)nmemb < 0 && size == 0))
		nmemb = 1;
	if (nmemb == 0 && (int)size < 0)
		size = 1;
	if (((int)nmemb < 0 && size != 0) || (nmemb != 0 && (int)size < 0))
		return (NULL);
	allowed_memory = malloc(size * nmemb);
	if (allowed_memory == NULL)
		return (NULL);
	pos = 0;
	while (pos < nmemb * size)
	{
		*(allowed_memory + pos) = 0;
		pos++;
	}
	return (allowed_memory);
}
