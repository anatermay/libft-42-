/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:22:23 by aternero          #+#    #+#             */
/*   Updated: 2024/04/17 17:54:57 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	while (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}
/*If the argument is a lower-case letter, the toupper() function returns
	 the corresponding upper-case letter if there is one; otherwise, the argu-
	 ment is returned unchanged.*/