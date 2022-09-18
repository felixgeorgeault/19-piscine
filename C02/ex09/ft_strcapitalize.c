/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:37:11 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/13 11:47:40 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha_upper(char c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
		return (0);
}

int	ft_is_alpha_num(char c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (0);
	}
	else
		return (1);
}

int	ft_is_alpha_lower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_alpha_upper(str[i]))
		{
			str[i] = str[i] + 32;
		}
		if (ft_is_alpha_num(str[i - 1]))
		{
			if (ft_is_alpha_lower(str[i]))
			{
				str[i] = str[i] - 32;
			}	
		}
		if (ft_is_alpha_lower(str[0]))
		{
			str[0] = str[0] - 32;
		}
		i++;
	}
	return (str);
}
