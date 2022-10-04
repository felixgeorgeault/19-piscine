/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:14:07 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/26 09:57:13 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_array_size(int min, int max)
{
	int	size;

	size = max - min;
	if (size < 0 && min < max)
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
	if (tab == NULL || size_tab == 0)
		return (0);
	i = 0;
	while (i < size_tab)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

/*
#include <stdio.h>
int	main(void)
{
	int min = 10;
	int max = 11;
	int i = 0;
	int size;
	int	*tab;

	tab = ft_range(min, max);
	size = ft_array_size(min, max);	
	printf("Size: %d\n\n", ft_array_size(min, max));
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
*/
