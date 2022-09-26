/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:31:48 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/26 12:41:44 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
			i++;
	return (i);
}

int	ft_strlen_tot(int size, char **strs, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		count += ft_strlen(sep);
		i++;
	}
	count -= ft_strlen(sep);
	return (count);
}

char	*ft_malloc_safe(int type, int length)
{
	char	*str;

	str = NULL;
	str = malloc(type * (length));
	return (str);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	str = ft_malloc_safe(1, ft_strlen_tot(size, strs, sep));
	if (str == NULL || size == 0)
		return (str);
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	str[ft_strlen(str)] = '\0';
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*strs[2];
	char	*separator;
	char *str;

	strs[0] = "Coucou";
	strs[1] = "Felix !";
	separator = ", ";
	str = ft_strjoin(2, strs, separator);
	printf("%s", str);
	free(str);
}*/
