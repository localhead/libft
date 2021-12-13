/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbagg <mbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:42:59 by mbagg             #+#    #+#             */
/*   Updated: 2021/10/26 17:54:12 by mbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*u;
	unsigned int	i;
	unsigned int	all;

	i = 0;
	all = count * size;
	u = malloc(all);
	if (!u)
		return ((void *)0);
	while ((all)--)
	{
		u[i] = 0;
		i++;
	}
	return (u);
}
