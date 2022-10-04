/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:31:16 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/18 10:13:30 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putline(char left, char center, char right, int x);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	ft_putline(47, 42, 92, x);
	if ((y - 2) >= 0)
	{
		while (y > 2)
		{
			ft_putline(42, 32, 42, x);
			y--;
		}
		ft_putline(92, 42, 47, x);
	}
}
