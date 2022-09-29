/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:12:23 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/28 20:29:03 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	count;

	i = 0;
	negative = 0;
	count = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative = !negative;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		count *= 10;
		count += str[i] - '0';
		i++;
	}
	if (negative)
		count = (-1) * count;
	return (count);
}

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
