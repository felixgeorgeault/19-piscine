/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:13:16 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/29 10:28:42 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);
int		ft_add(int a, int b);
int		ft_minus(int a, int b);
int		ft_times(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		ft_strlen(char *str);
int		ft_check_op(char op);
int		ft_check_params(int nb2, char op);
void	ft_putnbr(int nb);
int		ft_convert_pos(int nb);

int	main(int argc, char **argv)
{
	int		nb;
	int		nb2;
	char	op;
	int		res;
	int		(*f[5])(int a, int b);

	if (argc != 4)
		return (0);
	nb = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	op = argv[2][0];
	if (!ft_check_params(nb2, op))
		return (0);
	f[0] = &ft_add;
	f[1] = &ft_minus;
	f[2] = &ft_times;
	f[3] = &ft_div;
	f[4] = &ft_mod;
	res = f[ft_check_op(op)](nb, nb2);
	ft_putnbr(res);
	write(1, "\n", 1);
	return (0);
}
