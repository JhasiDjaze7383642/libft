/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 07:57:39 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/15 07:58:04 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		nb;
	int		pos;
	char	*line;

	if (argc == 2)
	{
		fd = open("file.txt", O_RDONLY);
		if (fd == FILE_ERR)
			return (EXIT_FAILURE);
		nb = atoi(argv[1]);
		pos = -1;
		while (++pos < nb)
		{
			line = get_next_line(fd);
			if (line)
				write(STDOUT_FILENO, line, ft_strlen(line));
			else
				write(STDOUT_FILENO, "(null)\n", 7);
			free(line);
		}
		close(fd);
	}
	return (EXIT_SUCCESS);
}
