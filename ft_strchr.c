/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:22:47 by aternero          #+#    #+#             */
/*   Updated: 2024/04/24 23:05:24 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
/*The functions strchr() and strrchr() return a pointer
	to the located character, or NULL if the
	character does not appear in the string.
	The strchr() function locates the first occurrence of c
	(converted to a char) in the string pointed to by s.
	The terminating null character is considered to be part of the string;
	therefore if c is `\0', the functions locate the terminating `\0'.*/