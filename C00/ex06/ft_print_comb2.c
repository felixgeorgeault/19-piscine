/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:01:34 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/08 18:34:02 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);
void	ft_putchar_double(int a, int b);


int main(void)
{
	ft_print_comb2();
}


void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar_double(a, b);
			b++;
		}
		a++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_double(int a, int b)
{
	char	d;
	char	u;
	char	v;
	char	y;

	d = (a / 10) + '0';
	u = (a % 10) + '0';
	ft_putchar(d);
	ft_putchar(u);
	ft_putchar(' ');
	v = (b / 10) + '0';
	y = (b % 10) + '0';
	ft_putchar(v);
	ft_putchar(y);
	if (a != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
