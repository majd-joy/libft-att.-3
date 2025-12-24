/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majbdour <majbdour@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:27:15 by majbdour          #+#    #+#             */
/*   Updated: 2025/12/19 20:54:28 by majbdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		node = *lst;
		while (node->next)
			node = node->next;
		node->next = new;
	}
	else
		*lst = new;
}
