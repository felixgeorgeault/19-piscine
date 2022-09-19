/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:15:02 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/15 17:31:54 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	count;

	i = 0;
	while (dest[i])
		i++;
	count = 0;
	while (src[count] && count < nb)
	{
		dest[i] = src[count];
		count++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
