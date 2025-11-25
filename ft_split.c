/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:32:18 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/25 16:53:38 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
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

static int	word_len(char const *s, char c)
{
	int	w_len;

	w_len = 0;
	while (s[w_len] != '\0' && s[w_len] != c)
		w_len++;
	return (w_len);
}

static void	free_words(char **split, int i)
{
	while (i > 0)
		free(split[--i]);
	free(split);
}

static char	**split_aux(char const *s, char c, char **split, int word_counter)
{
	int	start;
	int	i;

	start = 0;
	i = 0;
	while (i < word_counter)
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
	split[word_counter] = NULL;
	return (split);
}

int	main(void)
{
	char str[] = "Hello 42 Network split example!";
	char delimiter = ' '; // Space is the delimiter
	char **result;
	int i = 0;

	// Call ft_split to split the string into words
	result = ft_split(str, delimiter);

	// If the split operation is successful, print the words
	if (result)
	{
		while (result[i] != NULL)
		{
			printf("Word %d: %s\n", i + 1, result[i]);
			free(result[i]); // Free each individual word after use
			i++;
		}
		free(result); // Free the array of words
	}
	else
	{
		printf("Memory allocation failed or invalid input.\n");
	}
	return (0);
}

	// int chunks(char *str, int sep)
	// {
	// 	int	i;
	// 	int	count;

	// 	i = 0;
	// 	count = 0;
	// 	while (str[i] && str[i] != '\0')
	// 	{
	// 		if (str[i] == (char) sep)
	// 			count += 1;
	// 		i++;
	// 	}
	// 	return(count);
	// }

	// char	**ft_split(char const *s, char c)
	// {
	// 	char **new_strings;
	// 	int	i;

	// 	new_strings = (char **)malloc(sizeof(char *) * chunks(s, c));
	// 	if (!new_strings)
	// 		free (new_strings);
	// 	return (NULL);
	// 	while (s[i] == c)
	// 	{
	// //
	// 	}
	// 	if()
	// 	return(new_strings);
	// }

	// malloc && free

	//The array of new strings resulting from the split.
	//NULL if the allocation fails.

	//The array of new strings resulting from the split.
	//NULL if the allocation fails.

	//Allocates memory (using malloc(3)) and returns an
	//array of strings obtained by splitting ’s’ using
	//the character ’c’ as a delimiter. The array must
	//end with a NULL pointer..
	// requirement for malloc is (sizeof(char) * num)

	// Example

	// char str[] = "Hello,World,Today,we, gonna,do,the,make,function";

	// char res[] = {"Hello", "World", "Today", "we", "gonna", "do", "the",
	//	"make", "function"};
