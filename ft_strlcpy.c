/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 10:40:42 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/15 13:46:34 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char src[] = "lorem ipsum dolor sit amet";
// 	char dst[15];
// 	size_t ret1;
// 	ret1 = ft_strlcpy(dst, src, 0);
// 	printf("\nft_strlcpy res of dst |%s|\n", dst);
// 	printf("ft_strlcpy return of len |%zu|\n", ret1);
// 	char src2[] = "lorem ipsum dolor sit amet";
// 	char dst2[15];
// 	size_t ret2;
// 	ret2 = strlcpy(dst2, src2, 0);
// 	printf("\nstrlcpy res of dst |%s|\n", dst2);
// 	printf("strlcpy return of len |%zu|\n\n", ret2);
// 	return (0);
// }
