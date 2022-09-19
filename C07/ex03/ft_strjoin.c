/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:31:48 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/18 15:21:05 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_malloc_safe(char *str, char **type)
{
	str = malloc(sizeof(type));
	if (str == NULL)
		return (str);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		c;

	str = NULL;	
	str = ft_malloc_safe(str, strs);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[c] = strs[i][j];
			c++;
			j++;
		}
		j = 0;
		while (sep[j] && i != (size - 1))
		{
			str[c] = sep[j];
			c++;
			j++;
		}
		i++;
	}
	str[c] = '\0';
	return (str);
}

int	main(void)
{	char *strs[2];
	char dest[] = "coucou"; // 6	
	char src[] = "felix"; // 5
	char sep[] = ", ";	// 2

	strs[0] = dest;
	strs[1] = src;
	printf("%s", ft_strjoin(2, strs, sep));
}
