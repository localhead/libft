/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbagg <mbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:14:16 by mbagg             #+#    #+#             */
/*   Updated: 2021/10/26 18:14:33 by mbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int sym)
{
	char	*re;

	re = (char *)str;
	while (*re != (char) sym)
	{
		if (*re == '\0')
			return (NULL);
		re++;
	}
	return (re);
}
