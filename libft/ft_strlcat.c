/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnassiri <nnassiri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:25:54 by nnassiri          #+#    #+#             */
/*   Updated: 2026/04/21 16:25:55 by nnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	len_dst = 0;
	while (len_dst < size && dst[len_dst])
		len_dst++;
	len_src = ft_strlen(src);
	j = 0;
	while (src[j] && len_dst + j < size - 1)
	{
		dst[len_dst + j] = src[j];
		j++;
	}
	if (len_dst != size)
		dst[len_dst + j] = '\0';
	return (len_dst + len_src);
}
