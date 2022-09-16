/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:40:17 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/15 17:28:54 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	count;

	i = 0;
	negative = 0;
	count = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative = !negative;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		count *= 10;
		count += str[i] - '0';
		i++;
	}
	if (negative)
		count = (-1) * count;
	return (count);
}
