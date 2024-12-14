/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:18:47 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 09:35:37 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	pos;
	size_t			length_s;
	char			*new;

	pos = 0;
	if (!s)
		return (NULL);
	length_s = ft_strlen(s) + 1;
	new = malloc(sizeof(char) * length_s);
	if (!new)
		return (0);
	while (*(s + pos) != '\0')
	{
		new[pos] = (f)(pos, s[pos]);
		pos++;
	}
	new[pos] = '\0';
	return (new);
}
