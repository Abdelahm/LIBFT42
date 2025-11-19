/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 14:26:40 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/19 14:57:33 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*smod;

	i = 0;
	smod = (char *)s;
	while (s[i])
	{
		if ((unsigned char)smod[i] == (unsigned char)c)
			return (&smod[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&smod[i]);
	return (NULL);
}

// int main(void)
// {
// 	const char *s = "Hello, world";
// 	char *ret;
// 	char ch = 'o';
// 	ret = ft_strchr(s, ch);
// 	printf("search '%c' in |%s|, Found, |%s|\n", ch, s, ret);
// 	ret = strchr(s, ch);
// 	printf("search '%c' in |%s|, Found, |%s|\n", ch, s, ret);
// 	return 0;
// }