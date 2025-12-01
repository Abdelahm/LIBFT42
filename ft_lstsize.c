/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:33:09 by abdelahm          #+#    #+#             */
/*   Updated: 2025/12/01 13:37:03 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*index;
	int		i;

	i = 0;
	index = lst;
	while (index)
	{
		index = index->next;
		i++;
	}
	return (i);
}
