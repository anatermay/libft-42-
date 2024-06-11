/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:25:23 by aternero          #+#    #+#             */
/*   Updated: 2024/04/15 19:20:09 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	int		num;
	char	ch;

	last = NULL;
	num = 0;
	ch = c;
	while (s[num] != '\0')
	{
		if (s[num] == ch)
			last = (char *)&s[num];
		num++;
	}
	if (ch == '\0')
		return ((char *)&s[num]);
	if (s[num] == '\0' && ch != '\0')
		return (last);
	return (last);
}
/*The functions strchr() and strrchr() return a pointer to
	the located character,or NULL if the character
	does not appear in the string. The strrchr() function is
	identical to strchr(), except it locates the last occurrence of c.*/