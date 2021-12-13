/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbagg <mbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:33:07 by mbagg             #+#    #+#             */
/*   Updated: 2021/10/26 19:10:30 by mbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sht;
	size_t	i;
	size_t	k;

	k = 0;
	if (!s)
		return ((void *)0);
	if ((ft_strlen(s) <= start) || start < 0)
		return (ft_strdup(""));
	if (ft_strlen(s) < start + len)
		len = ft_strlen(s) - start;
	sht = (char *)malloc(sizeof(char) * (len + 1));
	if (!sht)
		return ((void *)0);
	if (0 <= start && (ft_strlen((char *)s) > start))
	{
		i = start;
		while (s[i] && k < len)
			sht[k++] = s[i++];
		sht[k] = '\0';
		return (sht);
	}
	sht[k] = '\0';
	return (sht);
}
