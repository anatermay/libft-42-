/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:54:07 by aternero          #+#    #+#             */
/*   Updated: 2024/04/17 21:57:23 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	index;
	char			*str1;
	char			*str2;

	index = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (index < n)
	{
		if (str1[index] != str2[index])
			return ((unsigned char)str1[index] - (unsigned char)str2[index]);
		index++;
	}
	return (0);
}
/*The memcmp() function returns zero if the two strings are identical,
	otherwise returns the difference between the first two differing bytes
	(treated as unsigned char values, so that `\200' is greater than `\0',
	for example).  Zero-length strings are always identical.  This behavior
	is not required by C and portable code should only depend on the sign of
	the returned value.*/