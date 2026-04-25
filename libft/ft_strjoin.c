/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnassiri <nnassiri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:25:29 by nnassiri          #+#    #+#             */
/*   Updated: 2026/04/21 16:25:30 by nnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_error(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

static void	ft_assign(char **str, char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		(*str)[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		(*str)[i] = s2[j];
		i++;
		j++;
	}
	(*str)[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!(s1 && s2))
		return (ft_error());
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	i += j;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	ft_assign(&str, s1, s2);
	return (str);
}
