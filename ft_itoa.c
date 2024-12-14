/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:16:16 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/11 11:01:34 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_figure(int n, int *start_mult)
{
	int	mult;
	int	figure;

	mult = 1;
	figure = 1;
	if (n == 0)
		figure = 2;
	if (n >= 1000000000 || n <= -1000000000)
	{
		*start_mult = 1000000000;
		figure = 11;
		return (figure);
	}
	while (n % mult != n)
	{
		mult *= 10;
		figure++;
	}
	*start_mult = (mult / 10);
	return (figure);
}

static void	ft_treat_negative(char *number,	int *n, int *pos)
{
	if (*n == 0)
	{
		number[0] = '0';
		*pos += 1;
	}
	if (*n < 0)
	{
		number[*pos] = '-';
		*n *= -1;
		*pos += 1;
	}
}

static void	ft_calculate(int *start_mult, int *pos, int *nb, char *number)
{
	while (*start_mult > 0)
	{
		number[*pos] = (*nb / *start_mult) + '0';
		*nb %= *start_mult;
		*start_mult /= 10;
		*pos += 1;
	}
}

char	*ft_itoa(int n)
{
	int		pos;
	int		figure;
	int		start_mult;
	int		nb;
	char	*number;

	pos = 0;
	figure = ft_figure(n, &start_mult);
	if (n < 0)
		figure++;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else
		number = malloc(sizeof(char) * figure);
	if (!number)
		return (NULL);
	ft_treat_negative(number, &n, &pos);
	nb = n;
	ft_calculate(&start_mult, &pos, &nb, number);
	number[pos] = '\0';
	return (number);
}
