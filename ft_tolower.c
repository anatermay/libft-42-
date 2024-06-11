/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:22:31 by aternero          #+#    #+#             */
/*   Updated: 2024/04/15 18:22:34 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	while (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}
/*If the argument is an upper-case letter, the tolower() function returns
     the corresponding lower-case letter if there is one; otherwise, the argu-
     ment is returned unchanged.*/