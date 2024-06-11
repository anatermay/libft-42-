/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:37:56 by aternero          #+#    #+#             */
/*   Updated: 2024/04/23 14:11:32 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	index;
	char			*str_dst;
	char			*str_src;

	if (!dst && !src)
		return (NULL);
	index = 0;
	str_dst = (char *)dst;
	str_src = (char *)src;
	while (index < n)
	{
		str_dst[index] = str_src[index];
		index++;
	}
	return (dst);
}
/*The memcpy() function copies n bytes from memory area src
	to memory area dst. If dst and src overlap, behavior is undefined.
	Applications in which dst and src might overlap.
	The memcpy() function returns the original value of dst.*/