/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 22:29:14 by aternero          #+#    #+#             */
/*   Updated: 2024/04/28 18:30:05 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	print_numb(int n, int fd)
{
	char	c;
	int		rest;

	rest = n % 10;
	if (n < 10)
	{
		c = rest + '0';
		write(fd, &c, 1);
	}
	else
	{
		c = rest + '0';
		n = n / 10;
		print_numb(n, fd);
		write(fd, &c, 1);
	}
}

void	negative_numb(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		n = n * -1;
		write(fd, "-", 1);
		print_numb(n, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		negative_numb(n, fd);
	else
		print_numb(n, fd);
}
/*The number to be sent is n, and the file descriptor on which
	it will be written is fd. The function does not return anything.
	Send the number n to the given file descriptor.*/