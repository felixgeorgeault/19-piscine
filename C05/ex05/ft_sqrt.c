/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:20:37 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/15 16:37:03 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb == 0 || nb == 1)
		return (nb);
	while (result <= nb && i < 46340)
	{
		i++;
		result = i * i;
	}
	if (((i - 1) * (i - 1)) != nb)
	{
		return (0);
	}
	return (i - 1);
}
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(121));
}
