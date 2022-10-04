/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:19:49 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/02 17:08:50 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (&str[i - j + 1]);
			}
		}
		else
			j = 0;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "coucou les gens";
	char find[] = "les";
	printf("%s", ft_strstr(str, find));
}
*/