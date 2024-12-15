/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 06:48:36 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/14 20:28:47 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const*s1, char const*s2)
{
	char	*joined;
	size_t	len_s1;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1 && s2)
		return (ft_strdup(s2));
	else if (s1 && !s2)
		return ((char *)s1);
	len_s1 = ft_strlen(s1);
	joined = malloc(sizeof(char) * (len_s1 + ft_strlen(s2) + 1));
	if (!joined)
		return (NULL);
	ft_memset(joined, '\0', len_s1 + ft_strlen(s2) + 1);
	ft_strcpy((char *)s1, joined);
	ft_strcpy((char *)s2, joined + len_s1);
	return (joined);
}
