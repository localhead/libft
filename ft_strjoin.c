/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbagg <mbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:18:47 by mbagg             #+#    #+#             */
/*   Updated: 2021/10/26 18:19:24 by mbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*re;
	unsigned int	i;
	unsigned int	total;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	total = ft_strlen((char *)s1) + ft_strlen ((char *)s2);
	re = (char *)malloc(sizeof(*re) * (total + 1));
	if (!re)
		return ((void *)0);
	while (*s1 != '\0')
		re[i++] = *s1++;
	while (*s2 != '\0')
		re[i++] = *s2++;
	re[i] = '\0';
	return (re);
}
