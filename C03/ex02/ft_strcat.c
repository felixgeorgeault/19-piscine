/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:56:29 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/15 17:07:02 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count;

	i = 0;
	while (dest[i])
		i++;
	count = 0;
	while (src[count])
	{
		dest[i] = src[count];
		count++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
