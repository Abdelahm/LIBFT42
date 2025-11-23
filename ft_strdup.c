/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:16:25 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/23 17:24:04 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s, len + 1);
	return (str);
}

// int	main(void)
// {
// 	const char str[] = "Hello";
// 	printf("%s\n\n", ft_strdup(str));
// 	return (0);
// }