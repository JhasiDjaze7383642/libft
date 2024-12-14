/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:55:11 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 12:05:56 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	error(char const *s, int return_value)
{
	if (s)
	{
		write(STDERR_FILENO, PROGRAM_NAME ": ", ft_strlen(PROGRAM_NAME) + 2);
		write(STDERR_FILENO, s, ft_strlen(s));
	}
	else
		write(STDERR_FILENO, PROGRAM_NAME ": " DEFAULT_ERROR_MESSAGE, 
			ft_strlen(PROGRAM_NAME) + 2);
	return (return_value);
}
