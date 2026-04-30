/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnassiri <nnassiri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:38:16 by nnassiri          #+#    #+#             */
/*   Updated: 2026/04/25 16:38:18 by nnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *i)
{
	write(1, &c, 1);
	if (i)
		(*i)++;
}

void	ft_putnbr(long long n, int *i)
{
	long long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-', i);
	}
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + 48, i);
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, i);
		nbr = nbr % 10;
		ft_putchar(nbr + 48, i);
	}
}
