/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnassiri <nnassiri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:37:49 by nnassiri          #+#    #+#             */
/*   Updated: 2026/04/25 16:37:51 by nnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_args_str(char c, int *count, va_list args)
{
	if (c == 'c')
	{
		ft_putchar(va_arg(args, int), NULL);
		(*count)++;
	}
	else if (c == '%')
	{
		ft_putchar('%', NULL);
		(*count)++;
	}
	else if (c == 's')
		ft_putstr(va_arg(args, char *), count);
}

static void	ft_print_args_nbr(char c, int *count, va_list args)
{
	if (c == 'p')
		ft_putnbr_base(va_arg(args, size_t), "0123456789abcdef", PTR, count);
	else if (c == 'd')
		ft_putnbr(va_arg(args, int), count);
	else if (c == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (c == 'u')
		ft_putnbr(va_arg(args, unsigned int), count);
	else if (c == 'x')
		ft_putnbr_base(va_arg(args, size_t), "0123456789abcdef", HEX, count);
	else if (c == 'X')
		ft_putnbr_base(va_arg(args, size_t), "0123456789ABCDEF", HEX, count);
}

void	ft_read_str(va_list args, const char *str, int len, int *count)
{
	int	i;

	i = 0;
	while (i < len)
	{
		while (str[i] && str[i] != '%')
		{
			ft_putchar(str[i], NULL);
			(*count)++;
			i++;
		}
		if (str[i] == '%')
		{
			i++;
			ft_print_args_str(str[i], count, args);
			ft_print_args_nbr(str[i], count, args);
			i++;
		}
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, str);
	ft_read_str(args, str, ft_strlen(str), &count);
	va_end(args);
	return (count);
}
