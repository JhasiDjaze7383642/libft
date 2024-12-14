/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:19:23 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 07:19:24 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*(little + 0) == '\0')
	{
		return ((char *) big);
	}
	while (*(big + i) != '\0' && i < len)
	{
		j = 0;
		while (*(big + (i + j)) != '\0' && *(big + (i + j)) == *(little + j))
		{
			if (i + j >= len)
				return (0);
			if (*(little + (j + 1)) == '\0')
			{
				return ((char *) &big[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
