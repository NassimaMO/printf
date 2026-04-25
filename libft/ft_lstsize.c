/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnassiri <nnassiri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:23:18 by nnassiri          #+#    #+#             */
/*   Updated: 2026/04/21 16:23:19 by nnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*cur;
	int		i;

	i = 0;
	cur = lst;
	while (cur)
	{
		cur = cur->next;
		i++;
	}
	return (i);
}
