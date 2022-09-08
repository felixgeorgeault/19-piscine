/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:36:09 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/08 19:46:27 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int main(void)
{
	ft_putnbr(56);
}

void	ft_putnbr(int nb)
{
	if (nb < 10)
	{
		nb = nb + '0';
		write(1, &nb, 1);
	} 
	elseif (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else 
	{
		
	}
}
