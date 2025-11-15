/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 14:26:40 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/15 14:52:53 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char *smod;

	i = 0;
	smod = (char *)s;
	while (s[i])
	{
		if (smod[i] == c)
			return (&smod[i]);
		i++;
	}
	if (s[i] == '\0')
		return (&smod[i]);
	return (NULL);
}
