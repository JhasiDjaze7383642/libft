/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:17:10 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 09:29:32 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_word_count(char *s, char c)
{
	size_t	count;

	if (!s)
		return (0);
	count = 0;
	while (*s)
	{
		if (*s == c)
			while (*s == c)
				s++;
		else
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

size_t	len_until_char(char *s, char c)
{
	size_t	len;

	if (!s)
		return (0);
	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char	**free_splitted(char ***splitted)
{
	char	**origin;

	origin = *splitted;
	while (**splitted)
	{
		free(**splitted);
		(*splitted)++;
	}
	free(origin);
	*splitted = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	**origin;

	split = malloc(sizeof(char *) * (get_word_count((char *)s, c) + 1));
	if (!split)
		return (NULL);
	origin = split;
	while (*s)
	{
		if (*s == c)
			while (*s == c)
				s++;
		else
		{
			*split = ft_substr(s, 0, len_until_char((char *)s, c));
			if (*split == NULL)
				return (free_splitted(&origin));
			split++;
			while (*s && *s != c)
				s++;
		}
	}
	*split = NULL;
	return (origin);
}
