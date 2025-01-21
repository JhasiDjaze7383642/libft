/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:55:11 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/21 10:24:03 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	err(char const *s, int return_value)
{
	char	*name;
	char	*default_error;

	name = ft_strdup(PROGRAM_NAME);
	default_error = ft_strdup(DEFAULT_ERROR_MESSAGE);
	if (s)
	{
		write(STDERR_FILENO, name, ft_strlen(name));
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, s, ft_strlen(s));
	}
	else
	{
		write(STDERR_FILENO, name, ft_strlen(name));
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, default_error, ft_strlen(default_error));
	}
	free(name);
	free(default_error);
	return (return_value);
}
