/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:32:18 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/28 15:43:37 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	chunks(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			counter++;
		i++;
	}
	return (counter);
}

int	word_len(char const *s, char c)
{
	int	w_len;

	w_len = 0;
	while (s[w_len] != '\0' && s[w_len] != c)
		w_len++;
	return (w_len);
}

void	free_words(char **split, int i)
{
	while (i > 0)
		free(split[--i]);
	free(split);
}

char	**splited(char const *s, char c, char **split, int c_words)
{
	int	start;
	int	i;

	start = 0;
	i = 0;
	while (i < c_words)
	{
		while (s[start] != '\0' && s[start] == c)
			start++;
		split[i] = ft_substr(s, start, word_len(s + start, c));
		if (!split[i])
			return (free_words(split, i), NULL);
		while (s[start] != '\0' && s[start] != c)
			start++;
		i++;
	}
	split[c_words] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		c_words;

	c_words = chunks(s, c);
	split = (char **)malloc((c_words + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split = splited(s, c, split, c_words);
	return (split);
}

// int main()
// {
//     char str[] = "Hello 42 Network split example!";
//     char delimiter = 'o';
//     char **result;
// 		int i = 0;

//     result = ft_split(str, delimiter);

//     if (result)
//     {
//         while (result[i] != NULL)
//         {
//             printf("Word %d: %s\n", i + 1, result[i]);
//             free(result[i]);
// 						i++;
//         }
//         free(result);
//     }
//     else
//     {
//         printf("Memory allocation failed or invalid input.\n");
//     }

//     return 0;
// }