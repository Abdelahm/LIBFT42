/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:49:04 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/24 15:07:51 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	l1;
	size_t	l2;
	size_t	i;

	i = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	join = (char *)malloc((l1 + l2 + 1) * sizeof(char));
	if (!join)
		return (NULL);
	while (i < l1)
	{
		join[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < l2)
	{
		join[l1 + i] = s2[i];
		i++;
	}
	join[l1 + l2] = '\0';
	return (join);
}

// int	main(void)
// {
// 	char	str1[] = "My name is";
// 	char	str2[] = "Aboud";
// 	char *joined;

// 	joined = ft_strjoin( str1, str2);
// 	printf("%s\n\n", joined);
// 	free (joined);
// 	return 0;
// }
