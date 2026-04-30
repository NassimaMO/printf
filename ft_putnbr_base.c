/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnassiri <nnassiri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:38:04 by nnassiri          #+#    #+#             */
/*   Updated: 2026/04/25 16:38:06 by nnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_recursive(size_t nbr, char *base, size_t base_len, int *i)
{
	if (nbr >= base_len)
		ft_recursive(nbr / base_len, base, base_len, i);
	ft_putchar(base[nbr % base_len], NULL);
	(*i)++;
}

int	ft_putnbr_base(size_t nbr, char *base, int type, int *i)
{
	if (!nbr && type)
		return (ft_putstr("(nil)", i), 1);
	if (nbr && type)
		ft_putstr("0x", i);
	ft_recursive(nbr, base, ft_strlen(base), i);
	return (0);
}
