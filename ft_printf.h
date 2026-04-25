#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

# define FD_STDOUT 1

# define PTR 1
# define HEX 0

int	ft_putnbr_base(unsigned long nbr, char *base, int n, int *i);
int	ft_printf(const char *str, ...);

#endif
