/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbagg <mbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:26:34 by mbagg             #+#    #+#             */
/*   Updated: 2021/10/26 18:26:45 by mbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*re1;
	unsigned char	*re2;
	size_t			i;

	re1 = (unsigned char *)str1;
	re2 = (unsigned char *)str2;
	i = 0;
	if (n == 0)
		return (0);
	while (re1[i] != '\0' && re1[i] == re2[i] && i < n - 1)
		i++;
	return ((unsigned char)re1[i] - (unsigned char)re2[i]);
}
