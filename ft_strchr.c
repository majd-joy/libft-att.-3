/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majbdour <majbdour@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:13:23 by majbdour          #+#    #+#             */
/*   Updated: 2025/12/04 19:41:18 by majbdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			charc;

	charc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == charc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == charc)
		return ((char *) &s[i]);
	return (NULL);
}
