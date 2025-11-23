/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 17:26:12 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/23 17:49:13 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t	len2;

	len2 = ft_strlen(s);
	while (s[start] != '\0' && start <= len)
	{
		str = (char *)malloc(sizeof(char) * (len2 + 1));
		start++;
	}
	if (!str)
		return (NULL);
	return (str);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*subs;
// 	size_t	s_len;
// 	size_t	i;

// 	if (!s)
// 		return (NULL);
// 	s_len = ft_strlen(s);
// 	if (start >= s_len)
// 		len = 0;
// 	else if (len > s_len - start)
// 		len = s_len - start;
// 	subs = (char *) malloc((len + 1) * sizeof(char));
// 	if (!subs)
// 		return (NULL);
// 	i = 0;
// 	if (start < s_len)
// 	{
// 		while (s[start + i] != '\0' && i < len)
// 		{
// 			subs[i] = s[start + i];
// 			i++;
// 		}
// 	}
// 	subs[i] = '\0';
// 	return (subs);
// }