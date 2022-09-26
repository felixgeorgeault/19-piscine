/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 09:45:40 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/26 09:59:10 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_array_size(long int min, long int max)
{
	int	size;

	size = max - min;
	if (size < 0 && min < max)
		return (size * (-1));
	if (min >= max)
		return (0);
	return (size);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = ft_array_size(min, max);
	tab = NULL;
	tab = malloc(sizeof(tab) * size);
	i = 0;
	if (tab == NULL)
	{
		*range = 0;
		return (-1);
	}
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (size);
}
/*
#include <stdio.h>
int	main(void)
{
	int	min = -10;
	int	max = 11;
	int	size;
	int	i = 0;
	int *tab;

	size = ft_ultimate_range(&tab, min, max);
	printf("Size: %d\n\n", size);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
}
*/
