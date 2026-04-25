/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnassiri <nnassiri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:21:47 by nnassiri          #+#    #+#             */
/*   Updated: 2026/04/21 16:21:48 by nnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr_tab(int n)
{
	int				j;
	long long int	nbr;

	j = 0;
	nbr = n;
	if (nbr < 0)
		j++;
	if (nbr == 0)
		j++;
	else
	{
		while (nbr)
		{
			nbr = nbr / 10;
			j++;
		}
	}
	return (j);
}

static void	ft_neg(long long int *nbr, char *temp, long long int *i)
{
	(*nbr) = (*nbr) * -1;
	temp[*i] = '-';
	(*i)++;
}

char	*ft_itoa(int n)
{
	long long int	i;
	long long int	j;
	long long int	nbr;
	char			*temp;

	i = 0;
	j = ft_nbr_tab(n);
	temp = malloc(sizeof(char) * (j + 1));
	if (!temp)
		return (NULL);
	nbr = n;
	if (nbr < 0)
		ft_neg(&nbr, temp, &i);
	temp[j] = '\0';
	j--;
	while (i <= j)
	{
		temp[j] = (nbr % 10) + 48;
		nbr = nbr / 10;
		j--;
	}
	return (temp);
}
