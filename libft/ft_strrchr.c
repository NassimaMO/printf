/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnassiri <nnassiri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:26:38 by nnassiri          #+#    #+#             */
/*   Updated: 2026/04/21 16:26:39 by nnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			temp = i;
		i++;
	}
	if (s[i] == (char)c)
		temp = i;
	if (s[temp] != (char)c)
		return (NULL);
	return ((char *)s + temp);
}
