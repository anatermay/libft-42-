/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:33:15 by aternero          #+#    #+#             */
/*   Updated: 2024/04/15 21:57:08 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n && (s1[index] != '\0' || s2[index] != '\0'))
	{
		if (s1[index] != s2[index])
			return ((unsigned char)s1[index] - (unsigned char)s2[index]);
		index++;
	}
	return (0);
}
/*The strcmp() and strncmp() functions return an integer greater than,
	equal to, or less than 0, according as the string s1 is greater than,
	equal to, or less than the string s2.  The comparison is done using
	unsigned characters, so that `\200' is greater than `\0'.
	The strncmp() function compares not more than n characters. 
	Because strncmp() is designed for comparing strings rather than
	binary data, characters that appear after a `\0' character
	are not compared.*/