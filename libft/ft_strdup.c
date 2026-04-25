/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnassiri <nnassiri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:25:12 by nnassiri          #+#    #+#             */
/*   Updated: 2026/04/21 16:25:13 by nnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	d = malloc((i + 1) * sizeof(char));
	if (!d)
		return (NULL);
	i = 0;
	while (s[i])
	{
		d[i] = ((char *)s)[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
