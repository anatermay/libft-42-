/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:43:11 by aternero          #+#    #+#             */
/*   Updated: 2024/04/17 20:35:16 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*str;

	index = 0;
	str = (unsigned char *)s;
	while (index < n)
	{
		if (str[index] == (unsigned char) c)
			return (str + index);
		index++;
	}
	return (NULL);
}
/*The memchr() function locates the first occurrence of c
	(converted to an unsigned char) in string s.
	The memchr() function returns a pointer to the byte located,
	or NULL if no such byte exists within n bytes.*/