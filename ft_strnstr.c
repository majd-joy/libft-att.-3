/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majbdour <majbdour@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 20:19:01 by majbdour          #+#    #+#             */
/*   Updated: 2025/12/19 20:46:52 by majbdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (i + j < len
			&& haystack[i + j]
			&& haystack[i + j] == needle[j])
		{
			j++;
			if (!needle[j])
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
