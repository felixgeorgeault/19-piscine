/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 09:45:40 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/18 13:50:18 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_array_size(long int min, long int max)
{
	int	size;

	size = max - min;
	if (size < 0)
		return (size * (-1));
	if (min >= max)
		return (0);
	return (size);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size_tab;
	int	i;

	size_tab = ft_array_size(min, max);
	range[0] = NULL;
	range[0] = malloc(sizeof(range[0]) * size_tab);
	i = 0;
	if (range[0] == NULL)
		return (-1);
	while (i < size_tab)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (size_tab);
}

#include <stdio.h>

int	main(void)
{
	int	min = 0;
	int	max = 10;
	int	*tab;
	int	**range;
	int	size;
	int i;

	range = &tab;
	size = ft_ultimate_range(range, min, max);
	printf("%d\n", size);
	i = 0;
	while (i < size)
	{
		printf("%d\n", range[0][i]);
		i++;
	}
}
