/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:27:43 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/15 14:01:00 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while (dst[d] && d < size)
		d++;
	while (src[s] && (d + s + 1) < size)
	{
		dst[d + s] = src[s];
		s++;
	}
	if (d != size)
		dst[d + s] = '\0';
	return (d + ft_strlen(src));
}

// int	main(void)
// {
// 	char src[] = " Barca";
// 	char dst[] = "Visca";
// 	size_t ret1;
// 	ret1 = ft_strlcat(dst, src, 4);
// 	printf("\nft_strlcat res of dst |%s|\n", dst);
// 	printf("ft_strlcat return of len |%zu|\n", ret1);
//	
// 	char src2[] = " Barca";
// 	char dst2[] = "Visca";
// 	size_t ret2;
// 	ret2 = strlcat(dst2, src2, 4);
// 	printf("\nstrlcat res of dst |%s|\n", dst2);
// 	printf("strlcat return of len |%zu|\n\n", ret2);
//	
// 	return (0);
// }