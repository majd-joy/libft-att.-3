/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majbdour <majbdour@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 20:39:44 by majbdour          #+#    #+#             */
/*   Updated: 2025/12/10 19:46:07 by majbdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	search_char;

	str = (unsigned char *) s;
	search_char = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == search_char)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
