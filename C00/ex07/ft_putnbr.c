/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:36:09 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/16 11:05:49 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_convert_pos(int nb)
{
	nb = nb * (-1);
	write(1, "-", 1);
	return (nb);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0)
	{
		if (nb < 10)
		{
			nb = nb + '0';
			write(1, &nb, 1);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
	else if (nb == -2147483648)
	{
		nb = ft_convert_pos(nb);
		write(1, "2", 1);
		ft_putnbr(147483648);
	}
	else
	{
		nb = ft_convert_pos(nb);
		ft_putnbr(nb);
	}
}
