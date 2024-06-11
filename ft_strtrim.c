/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:39:18 by aternero          #+#    #+#             */
/*   Updated: 2024/04/28 20:00:37 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	while (start < end && ft_strchr(set, s1[end]) != NULL)
		end--;
	end++;
	str = ft_substr(s1, start, end - start);
	return (str);
}
/*"The string s1 should be trimmed to a specified number of characters.
	It returns s1, unless memory allocation fails,
	in which case it returns NULL. The authorized function is malloc.
	Remove all characters from the string set from the beginning and end of s1
	until a character not belonging to set is found.
	The resulting string is returned as a malloc(3) allocation."*/