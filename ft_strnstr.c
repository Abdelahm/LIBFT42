/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:27:33 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/21 17:35:44 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		l = 0;
		while (i + l < len && big[i + l] == little[l])
		{
			if (little[l + 1] == '\0')
				return ((char *)big + i);
			l++;
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     const char *hay = "Foo Bar Baz";
//     const char *need = "Bar";
//     size_t len = 8;
//     char *p = strnstr(hay, need, len);
// 		printf("orgin found: '%s' at offset %ld\n\n", p, (long)(p - hay));

//     const char *hay2 = "Foo Bar Baz";
//     const char *need2 = "Bar";
//     char *d = ft_strnstr(hay2, need2, len);
// 		printf("yours found: '%s' at offset %ld\n", d, (long)(d - hay));

//     return 0;
// }
