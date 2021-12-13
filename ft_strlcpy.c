/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbagg <mbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:23:18 by mbagg             #+#    #+#             */
/*   Updated: 2021/10/26 18:23:34 by mbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (src[i] != '\0')
	{
		i++;
	}
	if (n == 0)
		return (i);
	while (j < n - 1 && j < i)
	{
		d[j] = s[j];
		j++;
	}
	d[j] = '\0';
	return (i);
}
