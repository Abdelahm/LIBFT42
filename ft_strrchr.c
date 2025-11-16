/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 13:51:59 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/16 17:23:34 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[0] == (char)c)
		return ((char *)&s[0]);
	return (NULL);
}

// int main(void)
// {
// 	const char *s = "Hello, world";
// 	char *ret;
// 	char ch = '\0';
// 	ret = ft_strrchr(s, ch);
// 	printf("search '%c' in |%s|, Found, |%s|\n", ch, s, ret);
// 	ret = strrchr(s, ch);
// 	printf("search '%c' in |%s|, Found, |%s|\n", ch, s, ret);
// 	return 0;
// }
