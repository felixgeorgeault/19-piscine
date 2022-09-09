#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;	
}

int	main(void)
{
	int	a = 8;
	int	b = 4;
	int	d = 0;
	int	r = 0;
	int	*div;
	int	*mod;
	
	div = &d;
	mod = &r;
	printf("%d = div %d = reste\n", d, r);
	ft_div_mod(a, b, div, mod);
	printf("%d = div %d = reste\n", d, r);
}
