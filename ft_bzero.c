/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:15:55 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/10 13:35:05 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n--)
	{
		ptr[n] = '\0';
	}
}

// int	main()
// {
// 	char test[] = "Hello Dec";
// 	char test1[] = "Hello Dec";
// 	ft_bzero(test, 5);
// 	bzero(test1, 5);
// 	printf("\n%s\n", test);
// 	printf("\n%s\n", test1);
// 	return (0);
// }