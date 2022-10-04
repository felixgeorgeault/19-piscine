/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:48:56 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/02 17:14:10 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

char	**ft_sort_params(int size, char **argv)
{
	int		i;
	char	*tempo;

	i = 1;
	while (i < size - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tempo = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tempo;
			i = 1;
		}
		else
			i++;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		return (0);
	while (i < argc)
	{
		argv = ft_sort_params(argc, argv);
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
