/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:16:00 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/27 10:01:59 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && check_separator(*str, charset))
			str++;
		if (*str)
			count++;
		while (*str && !check_separator(*str, charset))
			str++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_separator(str[i], charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int		i;
	int		len_word;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, charset);
	word = (char *)malloc((sizeof(char) * (len_word)) + 1);
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**strs;

	i = 0;
	strs = (char **)malloc(sizeof(char *)
			* (count_strings(str, charset) + 1));
	while (*str)
	{
		while (*str && check_separator(*str, charset))
			str++;
		if (*str)
		{
			strs[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !check_separator(*str, charset))
			str++;
	}
	strs[i] = 0;
	return (strs);
}

/*
#include <stdio.h>
int	main(void)
{
	int		index;
	char	**split;
	split = ft_split(",,,,,fseou ifh .....berep,,,,e", ",.");
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}
*/
