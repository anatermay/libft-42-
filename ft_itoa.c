/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:39:11 by aternero          #+#    #+#             */
/*   Updated: 2024/05/01 22:40:51 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_counter(int n)
{
	unsigned int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	size;
	unsigned int	number;

	size = ft_counter(n);
	str = (char *)malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
	}
	number = n;
	if (n == 0)
		str[0] = '0';
	str[size] = '\0';
	while (number != 0)
	{
		str[size - 1] = (number % 10) + '0';
		number = number / 10;
		size--;
	}
	return (str);
}
/*n is the integer to convert to char.
	The function itoa returns the string representing the number
	and NULL if memory allocation fails.
	The authorized function is malloc.
	It uses malloc(3) and generates a string that represents
	the integer value received as an argument.
	Negative numbers must be handled.*/