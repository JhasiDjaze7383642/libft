/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:52:37 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 13:10:28 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	int		fd;
	char	*line;

	fd = open("file.txt", O_RDONLY);
	if (fd == FILE_ERR)
		return (error("main(): open() failed.\n", FILE_ERR));
	/* while (TRUE) */
	/* { */
	/* 	line = get_next_line(fd); */
	/* 	if (!line) */
	/* 		break ; */
	/* 	write(STDERR_FILENO, line, ft_strlen(line)); */
	/* 	free(line); */
	/* } */
	line = get_next_line(fd);
	write(STDOUT_FILENO, line, ft_strlen(line));
	free(line);
	line = get_next_line(fd);
	write(STDOUT_FILENO, line, ft_strlen(line));
	free(line);
	return (EXIT_SUCCESS);
}
