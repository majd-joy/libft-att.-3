/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majbdour <majbdour@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 20:55:42 by majbdour          #+#    #+#             */
/*   Updated: 2025/12/19 21:53:09 by majbdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	t;
	size_t	i;
	char	*ptr;

	t = nmemb * size;
	if (size != 0 && ((t / size) != nmemb))
		return (NULL);
	ptr = malloc(t);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
		ptr[i++] = 0;
	return (ptr);
}
