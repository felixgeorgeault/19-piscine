/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:40:02 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/24 11:39:47 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*tab;

	len = ft_strlen(src);
	tab = malloc(sizeof(*tab) * (len + 1));
	if (tab == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

int	ft_free(t_stock_str *tab, int i)
{
	int	j;

	j = 0;
	while (j <= i)
	{
		free(tab[j].copy);
		j++;
	}
	free(tab);
	return (0);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (tab[i].copy == 0)
			ft_free(tab, i);
		i++;
	}
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}
