/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majbdour <majbdour@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:16:13 by majbdour          #+#    #+#             */
/*   Updated: 2025/12/19 13:32:41 by majbdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)dest;
	while (len--)
		*p++ = (unsigned char)ch;
	return (dest);
}
