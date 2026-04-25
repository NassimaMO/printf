#include <unistd.h>

int	ft_putstr_fd(char *s, int fd, int *count)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr_fd("(null)", 1, count);
		return (i);
	}
	while (s[i])
	{
		write(fd, &s[i], 1);
		(*count)++;
		i++;
	}
	return (i);
}
