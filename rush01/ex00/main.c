/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:58:56 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/18 15:30:10 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_atoi(char *str, int *tab)
{
	int	i;
	int	j;
	int	number;

	i = 0;
	j = 0;
	number = 0;
	while ((str[i] >= '0' && str[i] <= '9') && j <= 16)
	{
		number = str[i] - '0'; // convert to int
		tab[j] = number;
		i += 2;
		j++;
	}
	return (tab);
}

int	main(int argc, char **argv)
{
	/*int	i;*/
	int	*tab;

	tab = NULL;
	tab = malloc(sizeof(tab) * 16);
	if (tab == NULL)
		return (0);
	printf("%d", argc);
/*	if (argc != 2)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	*/tab = ft_atoi(argv[1], tab);/*
	while (i < 16)
	{
		tab[i] = tab[i] + '0'; // convert to char
		write(1, &tab[i], 1);
		if (i % 4 == 0)
		{
			write(1, "\n", 1);
		}
		i++;
	}*/
	return (0);
}
