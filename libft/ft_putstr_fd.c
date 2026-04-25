/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnassiri <nnassiri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:38:30 by nnassiri          #+#    #+#             */
/*   Updated: 2026/04/25 16:38:31 by nnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
