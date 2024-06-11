/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:23:42 by aternero          #+#    #+#             */
/*   Updated: 2024/04/17 21:49:40 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (*haystack && len-- >= needle_len)
	{
		if (*haystack == *needle && !ft_strncmp(haystack, needle, needle_len))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
/*The strnstr() function locates the first occurrence of the null-terminated
	string needle in the string haystack, where not more than len characters
	are searched. Characters that appear after a `\0' character are not searched.
	Since the strnstr() function is a FreeBSD specific API,
	it should only be used when portability is not a concern.*/