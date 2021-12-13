/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbagg <mbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:24:56 by mbagg             #+#    #+#             */
/*   Updated: 2021/10/26 18:25:56 by mbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*sht;

	if (!s)
		return ((void *)0);
	sht = ft_strdup(s);
	if (!sht)
		return ((void *)0);
	i = 0;
	while (s[i] != '\0')
	{
		sht[i] = f(i, s[i]);
		i++;
	}
	sht[i] = '\0';
	return (sht);
}
