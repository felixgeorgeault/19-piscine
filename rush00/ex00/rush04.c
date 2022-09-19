/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:31:16 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/18 10:16:20 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void	ft_putline(char left, char center, char right, int x);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	ft_putline(65, 66, 67, x);
	if ((y - 2) >= 0)
	{
		while (y > 2)
		{
			ft_putline(66, 32, 66, x);
			y--;
		}
		ft_putline(67, 66, 65, x);
	}
}