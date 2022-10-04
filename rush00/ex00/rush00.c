/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:31:16 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/18 10:15:53 by fgeorgea         ###   ########.fr       */
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
	ft_putline(111, 45, 111, x);
	if ((y - 2) >= 0)
	{
		while (y > 2)
		{
			ft_putline(124, 32, 124, x);
			y--;
		}
		ft_putline(111, 45, 111, x);
	}
}
