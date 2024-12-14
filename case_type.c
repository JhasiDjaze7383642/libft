/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 08:37:43 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 08:40:20 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	are_uppercase(const char c)
{
	return (c >= 0x41 && c <= 0x5A);
}

t_bool	are_lowercase(const char c)
{
	return (c >= 0x61 && c <= 0x7A);
}
