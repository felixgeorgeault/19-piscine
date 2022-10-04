/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:11:22 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/28 17:55:46 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
int		ft_double(int nb)
{
	return (nb * 2);
}
*/

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*array;

	i = 0;
	array = NULL;
	array = malloc((sizeof(int) * length));
	if (!array)
		return (0);
	while (i < length)
	{
		array[i] = (*f)(tab[i]);
		i++;
	}
	return (array);
}
/*
#include <stdio.h>
int	main(void)
{	
	int	tab[4] = {2, 4, 8};
	int	*array;
	int	i;
	
	array = ft_map(tab, 3, &ft_double);
	i = 0;
	while (i < 3)
	{
		printf("%d\n", array[i]);
		i++;
	}
	free(array);
 	return (0);
}*/
