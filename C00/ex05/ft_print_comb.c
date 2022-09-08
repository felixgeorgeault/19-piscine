/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:57:10 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/08 14:04:33 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putchar_triple(char a, char b, char c);
void	ft_print_comb(void);

/*
int main(void)
{
	ft_print_comb();
}
*/

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar_triple(a, b, c);
				if (a != '7')
				{
					write(1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_triple(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}
