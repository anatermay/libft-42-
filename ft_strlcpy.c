/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:25:08 by aternero          #+#    #+#             */
/*   Updated: 2024/04/15 19:48:08 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	y;
	size_t	len;
	size_t	x;

	y = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (dstsize == 0)
	{
		return (len);
	}
	x = dstsize - 1;
	while (y < x && src[y] != '\0')
	{
		dst[y] = src[y];
		y++;
	}
	dst[y] = '\0';
	return (len);
}
/*strlcpy() copies up to dstsize - 1 characters from the string src to dst,
     NUL-terminating the result if dstsize is not 0.*/