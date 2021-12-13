/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbagg <mbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:10:24 by mbagg             #+#    #+#             */
/*   Updated: 2021/10/26 18:10:36 by mbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_fck(int len)
{
	int	fck;

	fck = 1;
	while (len > 0)
	{
		fck = fck * 10;
		len--;
	}
	return (fck);
}

int	ft_len(int n)
{
	int	len;

	len = 0;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	len;
	int	tmp;

	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	len = ft_len(n);
	while (len >= 0)
	{
		tmp = n / ft_fck(len);
		tmp = tmp + '0';
		ft_putchar_fd(tmp, fd);
		n = n % ft_fck(len);
		len--;
	}
}
