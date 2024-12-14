/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:18:16 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 11:03:10 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pass(const char *nptr, int pos)
{
	if ((*(nptr + pos) == '-' || *(nptr + pos) == '+')
		&& !ft_isdigit(*(nptr + (pos + 1))))
		return (0);
	if (*(nptr + pos) == '-' && ft_isdigit(*(nptr + (pos + 1))))
		return (2);
	else if (*(nptr + pos) == '-' || *(nptr + pos) == '+' || *(nptr + pos) == 32
		|| (*(nptr + pos) >= 9 && *(nptr + pos) <= 13))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int	result;
	int	pos;
	int	sign;

	result = 0;
	pos = 0;
	sign = 1;
	if (!nptr)
		return (0);
	while (!ft_isdigit(*(nptr + pos)))
	{
		if (ft_pass(nptr, pos) == 2)
		{
			sign *= -1;
			pos++;
		}
		else if (ft_pass(nptr, pos) == 1)
			pos++;
		else if (!ft_pass(nptr, pos))
			return (0);
	}
	pos--;
	while (ft_isdigit(*(nptr + (++pos))))
		result = result * 10 + (*(nptr + pos) - '0');
	return (result * sign);
}
