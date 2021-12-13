/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbagg <mbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:29:15 by mbagg             #+#    #+#             */
/*   Updated: 2021/10/26 18:29:26 by mbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int sym)
{
	char	*re;
	int		i;

	re = (char *)str;
	i = ft_strlen(re);
	while (i >= 0)
	{
		if (re[i] == (char) sym)
			return (&re[i]);
		i--;
	}
	return (0);
}
