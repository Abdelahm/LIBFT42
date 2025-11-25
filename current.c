/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   current.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 13:10:20 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/25 16:54:48 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

// _____________________________________________________________________________
// SUBSTR - EXP
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char *str;    // Pointer that will store the allocated substring
// 	size_t len_org; // Length of the original string 's'
// 	size_t i;     // Index used for copying char acters
// 	// If the input string is NULL, return NULL immediately
// 	if (!s)
// 		return (NULL);
// 	// Calculate the length of the original string
// 	len_org = ft_strlen(s);
// 	// -----------------------------------------------------------
// 	// CASE 1: start is OUTSIDE the string
// 	// Example: s = "hello", start = 10
// 	// 42 expects: return an EMPTY string ("")
// 	// -----------------------------------------------------------
// 	if (start >= len_org)
// 	{
// 		str = (char *)malloc(1); // Allocate 1 byte for the '\0'
// 		if (!str)
// 			return (NULL);
// 		str[0] = '\0'; // Make the empty string
// 		return (str);
// 	}
// 	// -----------------------------------------------------------
// 	// CASE 2: The requested substring goes past the end of 's'
// 	// Example: s = "hello", start = 3, len = 10
// 	// Only 2 chars ("lo") are available, so reduce len
// 	// -----------------------------------------------------------
// 	if (start + len > len_org)
// 		len = len_org - start;
// 	// -----------------------------------------------------------
// 	// Allocate memory for the substring:
// 	//   - len characters
// 	//   - +1 for the null terminator '\0'
// 	// -----------------------------------------------------------
// 	str = (char *)malloc(len + 1);
// 	if (!str)
// 		return (NULL);
// 	// -----------------------------------------------------------
// 	// Copy each character from s starting at index 'start'
// 	// Stop after copying 'len' characters or if we hit '\0'
// 	// -----------------------------------------------------------
// 	i = 0;
// 	while (i < len && s[start + i] != '\0')
// 	{
// 		str[i] = s[start + i];
// 		i++;
// 	}
// 	// Always null-terminate the substring
// 	str[i] = '\0';
// 	// Return the newly allocated substring
// 	return (str);
// }
_____________________________________________________________________
// STRTRIM

// #include <stdio.h>
// #include <stdlib.h>

// /* -----------------------------------------------------------
//    Helper function: ft_strlen
//    Returns the length of a string.
// ----------------------------------------------------------- */
// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

/* -----------------------------------------------------------
   Helper function: ft_strchr
   Searches for a character c inside string s.
   Returns pointer to the first occurrence, or NULL if not found.
----------------------------------------------------------- */
// char	*ft_strchr(const char *s, int c)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == (char)c)
// 			return ((char *)&s[i]);
// 		i++;
// 	}
// 	/* Check null terminator match (for c == '\0') */
// 	if (s[i] == (char)c)
// 		return ((char *)&s[i]);
// 	return (NULL);
// }

// /* -----------------------------------------------------------
//    Helper function: ft_substr
//    Creates a substring from s, starting at index start,
//    with maximum length len.
// ----------------------------------------------------------- */
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*sub;
// 	size_t	i;

// 	if (!s)
// 		return (NULL);
// 	/* If start is beyond the string, return empty string */
// 	if (start >= ft_strlen(s))
// 		return (calloc(1, 1));
// 	sub = malloc(len + 1);
// 	if (!sub)
// 		return (NULL);
// 	i = 0;
// 	while (i < len && s[start + i] != '\0')
// 	{
// 		sub[i] = s[start + i];
// 		i++;
// 	}
// 	sub[i] = '\0';
// 	return (sub);
// }

// /* -----------------------------------------------------------
//    Main function: ft_strtrim
//    Removes all characters in 'set' from the beginning and end
//    of string s1. Returns a newly allocated trimmed string.
// ----------------------------------------------------------- */
// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*trimm;
// 	int		start;
// 	int		end;

// 	// Start looking from the beginning of the string
// 	start = 0;
// 	// Safety check: if either input is NULL → return NULL
// 	if (!s1 || !set)
// 		return (NULL);
// 	// Move 'start' forward while characters are in 'set'
// 	while (s1[start] != '\0')
// 	{
// 		if (ft_strchr(set, s1[start]) != NULL)
// 			start++;
// 		else
// 			break ;
// 	}
// 	// Set 'end' to the last character index
// 	end = ft_strlen(s1) - 1;
// 	// Move 'end' backward while characters are in 'set'
// 	while (end > start)
// 	{
// 		if (ft_strchr(set, s1[end]) != NULL)
// 			end--;
// 		else
// 			break ;
// 	}
// 	// Extract substring from start to end
// 	trimm = ft_substr(s1, start, (end - start + 1));
// 	return (trimm);
// }

/* -----------------------------------------------------------
   Testing the function
----------------------------------------------------------- */
// int main(void)
// {
// 	char *result1 = ft_strtrim("+++hello++", "+");
// 	char *result2 = ft_strtrim("   \t\n42 Cursus\t\n  ", " \t\n");
// 	char *result3 = ft_strtrim("xxxxabcxxxx", "x");

// 	printf("Result 1: '%s'\n", result1);  // expected "hello"
// 	printf("Result 2: '%s'\n", result2);  // expected "42 Cursus"
// 	printf("Result 3: '%s'\n", result3);  // expected "abc"

// 	free(result1);
// 	free(result2);
// 	free(result3);

// 	return (0);
// }

//__________________________________________________________________________

//#SPLIT

// static int	count_words(char const *s, char c)
// {
// 	int	i;
// 	int	counter;

// 	i = 0;
// 	counter = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
// 			counter++;
// 		i++;
// 	}
// 	return (counter);
// }

// static int	word_len(char const *s, char c)
// {
// 	int	w_len;

// 	w_len = 0;
// 	while (s[w_len] != '\0' && s[w_len] != c)
// 		w_len++;
// 	return (w_len);
// }

// static void	free_words(char **split, int i)
// {
// 	while (i > 0)
// 		free(split[--i]);
// 	free(split);
// }

// static char	**split_aux(char const *s, char c, char **split, int word_counter)
// {
// 	int	start;
// 	int	i;

// 	start = 0;
// 	i = 0;
// 	while (i < word_counter)
// 	{
// 		while (s[start] != '\0' && s[start] == c)
// 			start++;
// 		split[i] = ft_substr(s, start, word_len(s + start, c));
// 		if (!split[i])
// 			return (free_words(split, i), NULL);
// 		while (s[start] != '\0' && s[start] != c)
// 			start++;
// 		i++;
// 	}
// 	split[word_counter] = NULL;
// 	return (split);
// }

/**
 * @brief Splits a string into an array of substrings using a delimiter.
 * @param s:   The string to be split.
 * @param c:   The delimiter character.
 * @return A pointer to an array of strings (substrings created from 's').
 *         Each element in the array represents a substring found between
 *         occurrences of 'c'.
 *         The array is NULL-terminated.
 *         Returns NULL if the memory allocation fails or if 's' is NULL.
 * @note
 * - Consecutive delimiters are treated as a single delimiter.
 *
 * - Leading and trailing delimiters are ignored, meaning they do not contribute
 * to the creation of empty strings.
 *
 * - The function handles empty strings and strings with only delimiters by
 * returning an array with a single NULL element.
 *
 * - The caller is responsible for freeing the memory allocated for the array and
 * its substrings.
 */
// char	**ft_split(char const *s, char c)
// {
// 	char	**split;
// 	int		word_counter;

// 	if (!s)
// 		return (NULL);
// 	word_counter = count_words(s, c);
// 	split = (char **)malloc((word_counter + 1) * sizeof(char *));
// 	if (!split)
// 		return (NULL);
// 	split = split_aux(s, c, split, word_counter);
// 	return (split);
// }



// // Helper function to create a substring (ft_substr equivalent)
// char *ft_substr(const char *s, int start, int len)
// {
//     int i;
//     char *substr;

//     if (!s)
//         return NULL;
//     substr = (char *)malloc(len + 1);
//     if (!substr)
//         return NULL;
//     for (i = 0; i < len; i++)
//         substr[i] = s[start + i];
//     substr[len] = '\0';
//     return substr;
// }

// // Count the number of words in the string
// static int count_words(const char *s, char c)
// {
//     int i = 0;
//     int counter = 0;

//     while (s[i] != '\0')
//     {
//         if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
//             counter++;
//         i++;
//     }
//     return counter;
// }

// // Get the length of a word in the string (up to the delimiter)
// static int word_len(const char *s, char c)
// {
//     int w_len = 0;
//     while (s[w_len] != '\0' && s[w_len] != c)
//         w_len++;
//     return w_len;
// }

// // Free memory allocated for the split strings
// static void free_words(char **split, int i)
// {
//     while (i > 0)
//         free(split[--i]);
//     free(split);
// }

// // Split the string into words based on the delimiter
// static char **split_aux(const char *s, char c, char **split, int word_counter)
// {
//     int start = 0;
//     int i = 0;

//     while (i < word_counter)
//     {
//         // Skip any leading delimiters
//         while (s[start] != '\0' && s[start] == c)
//             start++;

//         // Create substring for the current word
//         split[i] = ft_substr(s, start, word_len(s + start, c));
//         if (!split[i]) // If allocation fails, free previously allocated memory and return NULL
//             return (free_words(split, i), NULL);

//         // Move start pointer past the word
//         while (s[start] != '\0' && s[start] != c)
//             start++;

//         i++;
//     }

//     // Null-terminate the array of words
//     split[word_counter] = NULL;
//     return split;
// }

// // Main function that integrates everything to split the string
// char **ft_split(const char *s, char c)
// {
//     char **split;
//     int word_counter;

//     // Count how many words we need to allocate memory for
//     if (!s)
//         return NULL;

//     word_counter = count_words(s, c);

//     // Allocate memory for the array of words + NULL terminator
//     split = (char **)malloc((word_counter + 1) * sizeof(char *));
//     if (!split)
//         return NULL;

//     // Call the auxiliary function to split the string
//     return split_aux(s, c, split, word_counter);
// }

// int main()
// {
//     char str[] = "Hello 42 Network split example!";
//     char delimiter = ' ';  // Space is the delimiter
//     char **result;

//     // Call ft_split to split the string into words
//     result = ft_split(str, delimiter);

//     // If the split operation is successful, print the words
//     if (result)
//     {
//         for (int i = 0; result[i] != NULL; i++)
//         {
//             printf("Word %d: %s\n", i + 1, result[i]);
//             free(result[i]);  // Free each individual word after use
//         }
//         free(result);  // Free the array of words
//     }
//     else
//     {
//         printf("Memory allocation failed or invalid input.\n");
//     }

//     return 0;
// }
