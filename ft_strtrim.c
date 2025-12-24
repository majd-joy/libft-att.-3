/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majbdour <majbdour@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 19:07:11 by majbdour          #+#    #+#             */
/*   Updated: 2025/12/19 20:46:08 by majbdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	check_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && check_set(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (j > i && check_set(s1[j - 1], set))
		j--;
	new = malloc(j - i + 1);
	if (!new)
		return (NULL);
	k = 0;
	while (i < j)
		new[k++] = s1[i++];
	new[k] = '\0';
	return (new);
}
