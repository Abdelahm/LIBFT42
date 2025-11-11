/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:43:30 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/10 14:05:39 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n--)
		ptr[n] = c;
	return (s);
}

// int main()
// {
// 	int c = 'm';
// 	char	check[] = "HELLO WORLD";
// 	char	che[] = "HELLO WORLD";
// 	ft_memset(check, c, 7);
// 	printf("%s \n", check);
// 	memset(che, c, 7);
// 	printf("%s \n", che);
// 	return 0;
// }
