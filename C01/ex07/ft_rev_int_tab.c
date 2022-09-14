/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:12:29 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/11 13:57:26 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		temp;
	int		i;
	int		index;

	i = 0;
	index = size - 1;
	while (i < size / 2)
	{
		temp = *(tab - i);
		*(tab + i) = *(tab + index - i);
		*(tab + index - i) = temp;
		i++;
	}
}
