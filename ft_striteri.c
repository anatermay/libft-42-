/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:57:57 by aternero          #+#    #+#             */
/*   Updated: 2024/04/29 19:27:38 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	index = 0;
	while (s[index] != '\0')
	{
		f(index, &s[index]);
		index++;
	}
}
/*s is the string to iterate over. f is the function to apply to each character.
	It does not return anything. There are no authorized functions.
	The function f is applied to each character of the string s,
	passing as parameters the index of each character within s
	and the address of the character itself,
	which may be modified if necessary.*/