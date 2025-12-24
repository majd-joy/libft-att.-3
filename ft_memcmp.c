/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majbdour <majbdour@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:55:26 by majbdour          #+#    #+#             */
/*   Updated: 2025/12/19 13:10:06 by majbdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
