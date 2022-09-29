/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:43:57 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/29 10:46:05 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int	index;
	int	i;

	i = 0;
	while (tab[i])
	{
		index = 0;
		while (tab[index])
		{
			if (tab[index + 1] && ft_strcmp(tab[index], tab[index + 1]) > 0)
				ft_swap(&tab[index], &tab[index + 1]);
			index++;
		}
		i++;
	}
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int		main(void)
{
	int		index;
	char	**tab;

	tab = malloc(5 * sizeof(char *));
	tab[0] = strdup(" ");
	tab[1] = strdup("4");
	tab[2] = strdup("!");
	tab[3] = strdup("A");
	tab[4] = strdup("b");
	tab[5] = strdup(" ");
	tab[6] = 0;
	index = 0;
	while (tab[index])
	{
		printf("tab[%d]  :%p> = $%s$\n", index, tab + index, tab[index]);
		index++;
	}
	ft_sort_string_tab(tab);
	printf("\n");
	index = 0;
	while (tab[index])
	{
		printf("tab[%d] : %p> = $%s$\n", index, tab + index, tab[index]);
		index++;
	}
}*/
