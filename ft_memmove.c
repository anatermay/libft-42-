/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 22:24:50 by aternero          #+#    #+#             */
/*   Updated: 2024/04/18 19:42:21 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_overlap(char *str_dst, char *str_src, size_t len)
{
	size_t	index;

	index = len;
	while (index > 0)
	{
		str_dst[index - 1] = str_src[index - 1];
		index--;
	}
}

void	ft_noverlap(char *str_dst, char *str_src, size_t len)
{
	size_t	index;

	index = 0;
	while (index < len)
	{
		str_dst[index] = str_src[index];
		index++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str_src;
	char	*str_dst;

	str_src = (char *)src;
	str_dst = (char *)dst;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (str_src > str_dst)
	{
		ft_noverlap(str_dst, str_src, len);
	}
	else
	{
		ft_overlap(str_dst, str_src, len);
	}
	return (dst);
}
/*The memmove() function copies len bytes from string src to string dst.
	 The two strings may overlap; the copy is always done in a non-destructive
	 manner.*/