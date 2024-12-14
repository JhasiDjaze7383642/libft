/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:15:57 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 07:15:58 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			compare;

	compare = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (compare < n)
	{
		if (*(str1 + compare) != *(str2 + compare))
			return (*(str1 + compare) - *(str2 + compare));
		if (*(str1 + compare) == '\0')
			break ;
		compare++;
	}
	return (0);
}
