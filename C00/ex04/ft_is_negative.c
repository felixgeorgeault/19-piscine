/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:14:02 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/08 10:21:23 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n);
void	ft_putchar(char c);

/*
**int main (void)
**{
**	ft_is_negative(-12000000);
**	return 0;
**}
*/

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
