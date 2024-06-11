/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:04:32 by aternero          #+#    #+#             */
/*   Updated: 2024/04/17 21:49:19 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	index;
	char			*str;

	index = 0;
	str = (char *)b;
	while (index < len)
	{
		str[index] = c;
		index++;
	}
	return (str);
}
/*The memset() function writes len bytes of value c
	(converted to an unsigned char) to the string b.
	The memset() function returns its first argument.*/
