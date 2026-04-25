/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnassiri <nnassiri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:26:33 by nnassiri          #+#    #+#             */
/*   Updated: 2026/04/21 16:26:33 by nnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	if (!little[i])
		return ((char *)big);
	while (big[i] && (i <= len || len == (size_t)-1))
	{
		j = 0;
		temp = i;
		while (big[temp] == little[j])
		{
			temp++;
			j++;
		}
		if (j >= (size_t)ft_strlen(little) && (temp <= len + 1 || \
(len == (size_t) - 1 && big[temp])))
			return (((char *)big) + i);
		i++;
	}
	return (NULL);
}
