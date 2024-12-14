/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:12:42 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 10:31:29 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*result;
	int		pos;

	pos = 0;
	result = (char *) s;
	if (!s)
		return (NULL);
	while (*(s + pos) != '\0')
	{
		if (*(s + pos) == (char) c)
			return (result + pos);
		pos++;
	}
	if ((char) c == 0)
		return (result + pos);
	return (NULL);
}
