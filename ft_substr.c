/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:53:56 by aternero          #+#    #+#             */
/*   Updated: 2024/05/09 21:15:41 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sublen;
	size_t	slen;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (start >= slen)
		return (ft_strdup(""));
	sublen = len;
	if (start + sublen > slen)
		sublen = slen - start;
	sub = (char *)malloc((sublen + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, sublen + 1);
	sub[sublen] = '\0';
	return (sub);
}
/*The variable s is the string from which to create the substring.
	start is the index of the character in 's' from which to start the substring.
	len is the maximum length of the substring.
	The function returns the resulting substring;
	NULL if memory allocation fails.
	The authorized function is malloc.
	The function allocates (with malloc(3)) and
	returns a substring of the string 's'.
	The substring starts from index 'start' and has a maximum length of 'len'.*/