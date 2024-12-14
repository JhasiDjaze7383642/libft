/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 08:30:25 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 09:12:30 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_str_comp	compare(char *s1, char *s2)
{
	if (!s1 || !s2)
		return (NULL_ARGS);
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (DIFFERENT);
		s1++;
		s2++;
	}
	if ((*s1 == '\0' && *s2 != '\0') || (*s1 != '\0' && *s2 == '\0'))
		return (DIFFERENT);
	return (EQUAL);
}

t_str_comp	insensitive_compare(char *s1, char *s2)
{
	if (!s1 || !s2)
		return (NULL_ARGS);
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			if (are_uppercase(*s1) && ft_tolower(*s1) == *s2)
				;
			else if (are_lowercase(*s1) && ft_toupper(*s1) == *s2)
				;
			else
				return (DIFFERENT);
		}
		s1++;
		s2++;
	}
	if ((*s1 == '\0' && *s2 != '\0') || (*s1 != '\0' && *s2 == '\0'))
		return (DIFFERENT);
	return (EQUAL);
}
