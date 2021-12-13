/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbagg <mbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:58:43 by mbagg             #+#    #+#             */
/*   Updated: 2021/11/21 18:01:46 by mbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	i;

	i = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	while (n / 10 > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*sht;
	int		i;

	i = ft_len(n);
	if (n == -2147483648)
		return (ft_strdup ("-2147483648"));
	sht = (char *)malloc(sizeof(char) * (i + 1));
	if (!sht)
		return ((void *)0);
	if (n < 0)
	{
		n = -n;
		sht[0] = '-';
	}
	sht[i--] = '\0';
	while (n / 10 > 0)
	{
		sht[i--] = (n % 10) + '0';
		n = n / 10;
	}
	sht[i] = (n % 10) + '0';
	return (sht);
}
