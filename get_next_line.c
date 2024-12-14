/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:30:43 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 13:40:07 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_next_line(int fd, unsigned long long size)
{
	static char			*line = NULL;
	
	if (line)
	{

	}
	else
	{
		line = malloc(sizeof(char) * size);
		if (!line)
		{
			error("get_line(): file is too big.\n", -1);
			return (NULL);
		}
	}
	read(fd, line, size);
	return (line);
}
