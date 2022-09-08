/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:27:26 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/07 18:21:27 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);
void	ft_putchar(char c);

/*
int main()
{
    ft_print_reverse_alphabet();
    return 0;
}
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int		i;

	i = 122;
	while (i >= 97)
	{
		ft_putchar (i);
		i--;
	}
}
