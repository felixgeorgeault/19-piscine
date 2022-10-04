/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 10:18:02 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/19 10:29:36 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		temp;
	int		j;

	j = 0;
	while (j < size - 1)
	{
		if (*(tab + j) > *(tab + j + 1))
		{
			temp = *(tab + j);
			*(tab + j) = *(tab + j + 1);
			*(tab + j + 1) = temp;
			j = 0;
		}
		else
		{
			j++;
		}
	}
}
