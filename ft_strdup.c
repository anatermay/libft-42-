/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:22:23 by aternero          #+#    #+#             */
/*   Updated: 2024/04/22 22:13:05 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*box;
	size_t	len;

	len = ft_strlen(s1) + 1;
	box = malloc(len);
	if (box == 0)
		return (0);
	ft_strlcpy(box, s1, len);
	return (box);
}
/*The strdup() function allocates sufficient memory for a copy of the string s1,
	does the copy, and returns a pointer to it. The pointer may subsequently be
	used as an argument to the function free. If insufficient memory is
	available, NULL is returned and errno is set to ENOMEM.
	The strndup() function copies at most n characters from
	the string s1 always NUL terminating the copied string.*/