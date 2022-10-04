/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:08:47 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/28 20:40:19 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_op(char op)
{
	if (op == '+')
		return (0);
	else if (op == '-')
		return (1);
	else if (op == '*')
		return (2);
	else if (op == '/')
		return (3);
	else if (op == '%')
		return (4);
	else
		return (-1);
}

int	ft_check_params(int nb2, char op)
{
	if (ft_check_op(op) == -1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (op == '/' && nb2 == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (op == '%' && nb2 == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}
