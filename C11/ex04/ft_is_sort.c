/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:56:27 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/29 16:02:29 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int	f(int a, int b)
{
	return (a - b);
}
*/

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	pos;
	int	neg;

	i = 0;
	pos = 0;
	neg = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			pos++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			neg++;
		i++;
	}
	if (pos == i || neg == i)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
int        main(void)
{
    int    tab[4] = {3, 2, 2, 0};
    int            length;

    length = 4;

    printf("%d\n", ft_is_sort(tab, length, &f));
}
*/
