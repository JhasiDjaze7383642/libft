/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:18:47 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 13:26:25 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long long	get_filesize(char *path)
{
	unsigned long long	filesize;
	unsigned long long	bytes;
	char				buffer[STANDARD_BUFFER];
	int					fd;

	filesize = 0;
	if (!path)
		return (0);
	fd = open(path, O_RDONLY);
	if (fd == FILE_ERR)
		return (0);
	while (TRUE)
	{
		bytes = read(fd, buffer, STANDARD_BUFFER);
		if (bytes == READ_END || bytes == READ_ERR)
			break ;
		filesize += bytes;
	}
	close(fd);
	return (filesize);
}
