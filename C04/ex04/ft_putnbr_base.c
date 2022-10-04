/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:08:12 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/02 17:11:04 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long int	ft_convert_pos(long int nbr)
{
	nbr = (-1) * nbr;
	write(1, "-", 1);
	return (nbr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_param(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			length;
	long int	nb;

	nb = nbr;
	length = ft_strlen(base);
	if (ft_check_param(base))
	{
		if (nb < 0)
			nb = ft_convert_pos(nb);
		if (nb < length)
			write(1, &base[nb], 1);
		else
		{
			ft_putnbr_base(nb / length, base);
			ft_putnbr_base(nb % length, base);
		}
	}
}

/*
#include <stdio.h>
int	main(void)
{
	ft_putnbr_base(42, "oscar");
}
*/