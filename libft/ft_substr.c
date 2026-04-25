/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnassiri <nnassiri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:26:51 by nnassiri          #+#    #+#             */
/*   Updated: 2026/04/21 16:26:53 by nnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_error(void)
{
	char				*temp;

	temp = malloc(1);
	if (!temp)
		return (NULL);
	temp[0] = '\0';
	return (temp);
}

static void	ft_assign(char **sub, char const *s, unsigned int start, size_t rl)
{
	size_t	i;

	i = 0;
	while (i < rl && s[start])
	{
		(*sub)[i] = ((char *)s)[start];
		start++;
		i++;
	}
	(*sub)[i] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	rlen;

	i = 0;
	while (s[i])
		i++;
	if (start > i || len == 0)
		return (ft_error());
	if (len + start > i || len > i - start)
	{
		sub = malloc(sizeof(char) * ((i - start) + 1));
		rlen = i - start;
	}
	else
	{
		sub = malloc(sizeof(char) * (len + 1));
		rlen = len;
	}
	if (!sub)
		return (NULL);
	ft_assign(&sub, s, start, rlen);
	return (sub);
}
