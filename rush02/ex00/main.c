/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:32:30 by lovanden          #+#    #+#             */
/*   Updated: 2022/09/25 11:59:12 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{	
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*str;

	str = "Parse Error!\n";
	if (argc != 2 && argc != 3)
	{
		ft_putstr(str);
		return (0);
	}
	if (!ft_check_number(argv[1]))
	{
		ft_putstr(str);
		return (0);
	}
	ft_putstr(argv[1]);
	return (0);
}
