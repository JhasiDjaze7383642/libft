/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:30:43 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/17 15:03:13 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_return	process_buffer(char **leftover, char **line);
void		process_line(char **left, char **line, char **old, int bytes);
void		*read_error_or_eof(char **leftover, char **line);
void		append_into_line_the_buffer(char **leftover, char **line);
void		*file_error_handler(char **leftover);

char	*subtract_line_and_buffer_the_rest(char **line, char **leftover)
{
	char	*subtracted_line;
	int		len_line;
	int		len_leftover;

	len_line = len_until_char(*line, '\n') + 1;
	len_leftover = len_until_char(*leftover, '\n');
	subtracted_line = ft_substr(*line, 0, len_line);
	if (ft_strlen(*line) == (size_t)len_line - 1)
	{
		ft_free((void **)leftover);
		*leftover = ft_substr(*line, len_line, ft_strlen(*line) - len_line);
	}
	else
		ft_memmove(*leftover, *leftover + len_leftover + 1,
			BUFFER_SIZE - len_leftover);
	ft_free((void **)line);
	return (subtracted_line);
}

char	*have_line_in_buffer(char **leftover)
{
	char	*subtracted_line;
	int		len_leftover;

	len_leftover = len_until_char(*leftover, '\n') + 1;
	subtracted_line = ft_substr(*leftover, 0, len_leftover);
	ft_memmove(*leftover, *leftover + len_leftover,
		BUFFER_SIZE - len_leftover - 1);
	return (subtracted_line);
}

char	*get_next_line(int fd)
{
	char			*line;
	char			*old_addr;
	int				bytes;
	static t_return	process_status;
	static char		*leftover = NULL;

	line = NULL;
	if (fd == FILE_ERR)
		return (file_error_handler(&leftover));
	if (leftover == NULL)
		leftover = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	else
		process_status = process_buffer(&leftover, &line);
	if (process_status.status == TRUE)
		return ((char *)process_status.value);
	while (TRUE)
	{
		bytes = read(fd, leftover, BUFFER_SIZE);
		if (bytes == READ_ERR || bytes == READ_END)
			return (read_error_or_eof(&leftover, &line));
		process_line(&leftover, &line, &old_addr, bytes);
		if (ft_strchr(line, '\n') || bytes < BUFFER_SIZE)
			return (subtract_line_and_buffer_the_rest(&line, &leftover));
	}
	return (line);
}
