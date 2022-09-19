/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:14:07 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/18 13:47:46 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_array_size(int min, int max)
{
	int	size;

	size = max - min;
	if (size < 0)
		return (size * (-1));
	if (min >= max)
		return (0);
	return (size);
}

int	*ft_range(int min, int max)
{
	int	size_tab;
	int	*tab;
	int	i;

	tab = NULL;
	size_tab = ft_array_size(min, max);
	tab = malloc(sizeof(int) * size_tab);
	i = 0;
	if (size_tab == '\0')
		return (0);
	if (tab == NULL)
		return (0);
	while (i < size_tab)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
#include <stdio.h>

int	main(void)
{
	int	min = -2147483648;
	int	max = -2147483648;
	int	*tab;
	int	i;
	int	size;

	size = ft_array_size(min, max);
	tab = ft_range(min, max);
	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
