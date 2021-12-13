/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbagg <mbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:04:10 by mbagg             #+#    #+#             */
/*   Updated: 2021/10/26 20:20:13 by mbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*re1;
	unsigned char	*re2;
	size_t			i;

	if (n == 0)
		return (0);
	re1 = (unsigned char *)str1;
	re2 = (unsigned char *)str2;
	i = 0;
	while (*re1 == *re2 && ++i < n)
	{
		re1++;
		re2++;
	}
	return ((int)(*re1 - *re2));
}
