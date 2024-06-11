/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:09:56 by aternero          #+#    #+#             */
/*   Updated: 2024/04/28 18:18:34 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1len;
	size_t	s2len;

	s1len = ft_strlen((char *)s1);
	s2len = ft_strlen((char *)s2);
	str = (char *)malloc((s1len + s2len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, s1len + 1);
	ft_strlcat(str, s2, s1len + s2len + 1);
	return (str);
}

/*The first string is s1 and the second is s2. It returns the first string,
	or NULL if if memory allocation fails.
	The authorized function is malloc.
	The function allocates (with malloc(3)) and
	returns a new string. It'ss formed by the concatenation of s1 and s2.*/