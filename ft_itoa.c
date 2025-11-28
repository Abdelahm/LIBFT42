/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:43:54 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/28 16:04:44 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_i(int n)
{
	int	i;

	i = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*to_char(int i, int f, int n, char *s)
{
	int	x;

	while (i >= 0)
	{
		x = n % 10;
		n /= 10;
		s[i] = x + '0';
		i--;
	}
	if (f)
		s[0] = '-';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		f;

	f = 0;
	i = len_i(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		i++;
	s = malloc ((i + 1) * sizeof(char));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		f = 1;
	}
	s[i] = '\0';
	i--;
	s = to_char(i, f, n, s);
	return (s);
}
// int main()
// {
// 	char *n;
// 	n = ft_itoa(999);
// 	if (n == NULL)
// 	printf("null");
// 	else
// 		printf(" %s\n",n);
// 	return (0);
// }