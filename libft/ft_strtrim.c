/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnassiri <nnassiri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:26:44 by nnassiri          #+#    #+#             */
/*   Updated: 2026/04/21 16:26:45 by nnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_try(char s, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if ((unsigned char)s == (unsigned char)set[i])
			return (1);
		i++;
	}
	return (0);
}

static void	ft_fill2(char const *s1, char const *set, char *temp, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && ft_try(s1[i], set))
		i++;
	while (s1[i] && i < n)
	{
		temp[j] = s1[i];
		i++;
		j++;
	}
	temp[j] = '\0';
}

static char	*ft_error(void)
{
	char	*tmp;

	tmp = malloc(1);
	if (!tmp)
		return (NULL);
	tmp[0] = 0;
	return (tmp);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] && ft_try(s1[i], set))
		i++;
	if (!s1[i])
		return (ft_error());
	while (s1[i + j])
		j++;
	while (s1[i + j - 1] && ft_try(s1[i + j - 1], set))
		j--;
	temp = malloc(sizeof(char) * ((unsigned int)j + 1));
	if (!temp)
		return (NULL);
	ft_fill2(s1, set, temp, i + j);
	return (temp);
}
