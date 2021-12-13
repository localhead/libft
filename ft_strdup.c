/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbagg <mbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:15:57 by mbagg             #+#    #+#             */
/*   Updated: 2021/10/26 18:16:08 by mbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*sht;
	int		i;
	int		sz;

	i = 0;
	sz = 0;
	while (str[sz])
		sz++;
	sht = malloc(sizeof(char) * (sz + 1));
	if (!sht)
		return ((void *)0);
	while (str[i])
	{
		sht[i] = str[i];
		i++;
	}
	sht[i] = '\0';
	return (sht);
}
