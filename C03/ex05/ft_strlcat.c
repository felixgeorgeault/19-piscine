/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:26:31 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/15 19:46:44 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				slen;
	unsigned int	dlen;

	slen = ft_str_len(src);
	dlen = ft_str_len(dest);
	i = 0;
	j = 0;
	if (size < dlen)
	{
		return (size + slen);
	}
	while (dest[i])
		i++;
	while (src[j] && i < size - 1 && size != 0)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (slen + dlen);
}
