/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnassiri <nnassiri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:20:54 by nnassiri          #+#    #+#             */
/*   Updated: 2026/04/21 16:20:55 by nnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*temp;
	size_t	i;

	i = 0;
	if (!nmemb || !size)
		return (malloc(0));
	if (SIZE_MAX / nmemb < size)
		return (NULL);
	temp = malloc(nmemb * size);
	if (!temp)
		return (NULL);
	while (i < nmemb * size)
	{
		temp[i] = '\0';
		i++;
	}
	return ((void *)temp);
}
