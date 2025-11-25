/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 17:26:12 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/24 16:01:53 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	len_org;

	if (!s)
		return (NULL);
	len_org = ft_strlen(s);
	if (start >= len_org)
	{
		str = (char *)malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (start + len > len_org)
		len = len_org - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

// int	main(void)
// {
// 	char s[] = "Hello";
// 	unsigned int	start = 10;
// 	size_t len = 5;
// char *temp = ft_substr(s, start, len);
// 	printf("%s", temp);
// free (temp);
// 	return (0);
// }

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	char	*trimmed;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = strlen(s1) - 1;
	while (s1[start] && strchr(set, s1[start]))
		start++;
	while (end >= start && strchr(set, s1[end]))
		end--;
	trimmed = malloc(end - start + 2);
	if (!trimmed)
		return (NULL);
	memcpy(trimmed, s1 + start, end - start + 1);
	trimmed[end - start + 1] = '\0';
	return (trimmed);
}

// // Example usage
// #include <stdio.h>
// int main()
// {
// 	char *s = ft_strtrim("+++hello++", "+");
// 	printf("'%s'\n", s);  // Output: 'hello'
// 	free(s);
// 	return (0);
// }
