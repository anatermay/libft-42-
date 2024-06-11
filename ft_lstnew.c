/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:50:02 by aternero          #+#    #+#             */
/*   Updated: 2024/05/13 21:38:25 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = (t_list *)content;
	newnode->next = NULL;
	return (newnode);
}

/*The node is created with the parameters content. This function returns the new
	node. The authorized function is malloc. The function creates a new node
	using malloc(3). The member variable "content" is initialized with the
	content of the parameter. The variable "next" is initialized with NULL.*/