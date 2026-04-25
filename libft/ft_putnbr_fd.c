#include <unistd.h>
#include "libft.h"

void	ft_putchar(char c, int fd, int *i)
{
	write(fd, &c, 1);
	(*i)++;
}

void	ft_putnbr_fd(long long n, int fd, int *i)
{
	long long	nbr;

	nbr = n;
	if (fd == -1)
		return ;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-', fd, i);
	}
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + 48, fd, i);
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd, i);
		nbr = nbr % 10;
		ft_putchar(nbr + 48, fd, i);
	}
}
