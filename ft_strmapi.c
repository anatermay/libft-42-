/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:08:45 by aternero          #+#    #+#             */
/*   Updated: 2024/04/28 21:15:36 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	unsigned int	length;
	char			*str;

	index = 0;
	length = 0;
	length = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	while (s[index] != '\0')
	{
		str[index] = f(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}

/*s is the string to iterate over and f is the function to apply to
	each character. The function returns the string created after the correct
	usage of f on each character and NULL if memory allocation fails.
	The function authorized is malloc. It applies the function f to
	each character of the string s, passing as parameters the index of
	each character within s and the character itself. It generates a new string
	with the result of the successive use of f.*/