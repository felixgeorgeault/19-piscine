/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:17:22 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/18 10:12:58 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putline(char left, char center, char right, int x)
{
	ft_putchar(left);
	if (x >= 2)
	{
		while ((x - 2) > 0)
		{
			ft_putchar(center);
			x--;
		}	
		ft_putchar(right);
	}
	ft_putchar('\n');
}
