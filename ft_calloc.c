/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 16:24:00 by abdelahm          #+#    #+#             */
/*   Updated: 2025/11/23 17:24:46 by abdelahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size * nmemb);
	return (ptr);
}

// #include <stdint.h>

// void    *ft_calloc(size_t nmemb, size_t size)
// {
//     void    *ptr;

//     if (nmemb && size && nmemb > SIZE_MAX / size)
//         return (NULL); // overflow protection

//     ptr = malloc(nmemb * size);
//     if (!ptr)
//         return (NULL);

//     // set allocated memory to zero
//     size_t total = nmemb * size;
//     unsigned char *p = ptr;
//     while (total--)
//         *p++ = 0;

//     return (ptr);
// }
