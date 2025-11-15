/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:09:38 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/13 17:52:32 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d_str;
	const unsigned char	*s_str;
	size_t				i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	d_str = (unsigned char *)dest;
	s_str = (const unsigned char *)src;
	if (d_str > s_str)
	{
		while (n--)
			d_str[n] = s_str[n];
	}
	else
	{
		while (i < n)
		{
			d_str[i] = s_str[i];
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char src[] = "Morning, Daytime, Night";
// 	char src2[] = "Morning, Daytime, Night";
// 	memmove(src +3 , src, 9);
// 	printf("test is \n|%s|\n", src);
// 	ft_memmove(src2 , src2, 9);
// 	printf("test is \n|%s|\n", src2);
// 	return 0;
// }
