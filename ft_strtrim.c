/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:14:04 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 09:57:21 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in_set(char const *s, char const *set, int from)
{
	int	pos;

	pos = 0;
	while (*(set + pos) != '\0')
	{
		if (*(s + from) == *(set + pos))
			return (1);
		pos++;
	}
	return (0);
}

static int	ft_area_left(char const *s, char const *set)
{
	int	pos;

	pos = 0;
	while (ft_in_set(s, set, pos))
	{
		pos++;
	}
	if (pos == (int) ft_strlen(s))
	{
		return (-1);
	}
	return (pos);
}

static int	ft_area_right(char const *s, char const *set)
{
	int	pos;

	pos = ((int) ft_strlen(s) - 1);
	while (ft_in_set(s, set, pos) && pos > 0)
	{
		pos--;
	}
	if (pos == 0)
		return (-1);
	else
		return (pos);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		extremum_left;
	int		extremum_right;
	int		buffer_size;
	int		pos;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	if (ft_area_left(s1, set) == -1 && ft_area_right(s1, set) == -1)
		return (ft_strdup(""));
	extremum_left = ft_area_left(s1, set);
	extremum_right = ft_area_right(s1, set);
	buffer_size = (extremum_right - extremum_left);
	pos = 0;
	trimmed = malloc(buffer_size + 2);
	if (trimmed == 0)
		return (0);
	while (extremum_left <= extremum_right)
		*(trimmed + pos++) = *(s1 + extremum_left++);
	*(trimmed + pos) = '\0';
	return (trimmed);
}
