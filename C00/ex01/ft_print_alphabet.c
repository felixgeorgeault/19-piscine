/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:54:28 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/07 17:55:10 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);
void	ft_putchar(char c);

/*
int main()
{
	ft_print_alphabet();
	return 0;
}
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int		i;

	i = 97;
	while (i <= 122)
	{
		ft_putchar (i);
		i++;
	}
}
