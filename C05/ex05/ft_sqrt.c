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

	i = 1;
	if (nb == 0 || nb == 1)
		return (nb);
	if (nb == 4)
		return (2);
	while (i < nb / 2 && i < 46340)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(169));
}
