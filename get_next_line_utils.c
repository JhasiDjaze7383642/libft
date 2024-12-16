/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:06:51 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/16 19:16:22 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*subtract_line_and_buffer_the_rest(char **line, char **leftover);
char	*have_line_in_buffer(char **leftover);
t_bool	clean_allocation(char *mem_adr);

void	*file_error_handler(char **leftover)
{
	if (*leftover)
		ft_free((void **)leftover);
	return (NULL);
}

void	append_into_line_the_buffer(char **leftover, char **line)
{
	*line = ft_strdup(*leftover);
	ft_free((void **)leftover);
	*leftover = malloc(sizeof(char) * BUFFER_SIZE + 1);
}

void	*read_error_or_eof(char **leftover, char **line)
{
	ft_free((void **)leftover);
	if (*line)
		ft_free((void **)line);
	return (NULL);
}

void	process_line(char **leftover, char **line, char **old_addr, int bytes)
{
	leftover[0][bytes] = '\0';
	*old_addr = *line;
	*line = ft_strjoin(*line, *leftover);
	if (*old_addr)
		ft_free((void **)old_addr);
}

t_return	process_buffer(char **leftover, char **line)
{
	t_return	process_status;

	process_status.status = FALSE;
	process_status.value = NULL;
	if (n_time_in(*leftover, '\n') > 0)
	{
		process_status.status = TRUE;
		process_status.value = have_line_in_buffer(leftover);
	}
	else
		append_into_line_the_buffer(leftover, line);
	return (process_status);
}
