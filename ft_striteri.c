/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:19:59 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/29 14:58:23 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// static void	to_upper(unsigned int index, char *c)
// {
// 	(void)index;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }
// int	main(void)
// {
// 	char s[] = "change these yalla";
// 	printf("Before: %s\n", s);
// 	ft_striteri(s, to_upper);
// 	printf("After:  %s\n", s);
// 	return (0);
// }
