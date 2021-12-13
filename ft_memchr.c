/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbagg <mbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:02:02 by mbagg             #+#    #+#             */
/*   Updated: 2021/10/26 18:03:49 by mbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int sym, size_t n)
{
	unsigned char	*re;
	unsigned char	smb;
	size_t			j;

	re = (unsigned char *)arr;
	smb = (unsigned char )sym;
	j = 0;
	while (j < n)
	{
		if (*re == smb)
		{
			return (re);
		}
		j++;
		re++;
	}
	return (NULL);
}
