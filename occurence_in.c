/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   occurence_in.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:38:26 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/14 20:39:57 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	n_time_in(char *s, char character)
{
	size_t	count;

	if (!s)
		return (0);
	count = 0;
	while (*s)
		if (*s++ == character)
			count++;
	return (count);
}
