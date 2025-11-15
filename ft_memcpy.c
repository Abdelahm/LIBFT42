/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:39:19 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/11 17:02:15 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*srcstr;
	char	*dststr;
	size_t	i;

	i = 0;
	srcstr = (char *)src;
	dststr = (char *)dest;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		dststr[i] = srcstr[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char src[] = "Hello World";
// 	char dst[50];
// 	char src1[] = "Hello World";
// 	char dst1[50];
// 	ft_memcpy(dst, src, 5);
// 	printf("\n%s\n", dst);
// 	memcpy(dst1, src1, 5);
// 	printf("\n%s\n", dst1);
// 	return (0);
// }
