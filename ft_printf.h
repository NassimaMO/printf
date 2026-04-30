/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnassiri <nnassiri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:37:58 by nnassiri          #+#    #+#             */
/*   Updated: 2026/04/25 16:37:59 by nnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

# define PTR 1
# define HEX 0

int     ft_putnbr_base(unsigned long nbr, char *base, int n, int *i);
int     ft_printf(const char *str, ...);

void	ft_putnbr(long long n, int *i);
int     ft_putstr(char *s, int *count);
int     ft_strlen(const char *s);
void	ft_putchar(char c, int *i);

#endif
