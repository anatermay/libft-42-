/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:39:11 by aternero          #+#    #+#             */
/*   Updated: 2024/04/28 13:08:55 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_spc(char str)
{
	if (str == ' ' || str == '\t')
		return (1);
	if (str == '\n' || str == '\v')
		return (1);
	if (str == '\f' || str == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while (str[i] != '\0' && !(ft_isdigit(str[i])) && ft_spc(str[i]))
		i++;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (!ft_isdigit(str[i + 1]))
			return (0);
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		result = (str[i] - 48) + (result * 10);
		i++;
	}
	return (result * sign);
}
/*The function reads the string pointed to by str and
	converts it to an integer representation. It stops reading the string at
	the first character that is not a digit, and then returns the integer value
	formed by the digits read so far. If the string is empty or does not contain
	a valid integer representation, atoi returns 0.*/