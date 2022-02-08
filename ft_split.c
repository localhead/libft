/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbagg <mbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:13:36 by mbagg             #+#    #+#             */
/*   Updated: 2021/10/26 19:11:23 by mbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **s, size_t i)
{
	while (i >= 0)
	{
		free(s[i]);
		i--;
	}
	free (s);
}

static size_t	ft_length(char const **s, char c)
{
	size_t	i;

	i = 0;
	while (**s != c && **s != '\0')
	{
		i++;
		(*s)++;
	}
	return (i);
}

static size_t	ft_lines(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
			i++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**sht;
	size_t	count;
	size_t	max;

	if (!s)
		return ((void *)0);
	sht = malloc(sizeof(sht) * (ft_lines(s, c) + 1));
	if (!sht)
		return ((void *)0);
	count = 0;
	max = ft_lines(s, c);
	while (*s != '\0' && count < max)
	{
		while (*s == c)
			s++;
		sht[count] = ft_substr(s, 0, ft_length(&s, c));
		if (!sht[count])
		{
			ft_free(sht, count - 1);
			return ((void *)0);
		}
		count++;
	}
	sht[count] = ((void *)0);
	return (sht);
}
