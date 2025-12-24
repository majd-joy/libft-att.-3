/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majbdour <majbdour@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:19:09 by majbdour          #+#    #+#             */
/*   Updated: 2025/12/19 21:05:40 by majbdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// #include <stdio.h>
static size_t	ft_size(long n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	l;
	size_t	len;

	l = n;
	len = ft_size(l);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (l < 0)
		l = -l;
	if (l == 0)
		str[0] = '0';
	while (l > 0)
	{
		str[--len] = (l % 10) + '0';
		l /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
