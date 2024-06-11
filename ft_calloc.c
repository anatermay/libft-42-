/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:50:28 by aternero          #+#    #+#             */
/*   Updated: 2024/04/22 21:16:32 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*box;

	box = malloc(count * size);
	if (box == 0)
		return (0);
	ft_bzero(box, count * size);
	return (box);
}
/*The malloc() function allocates size bytes of memory and returns a
	pointerclear to the allocated memory.*/