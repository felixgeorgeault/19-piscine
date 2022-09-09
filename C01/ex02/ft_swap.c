#include <stdio.h>

void	ft_swap(int *ptra, int *ptrb)
{
	int	c;
	
	c = *ptra;
	*ptra = *ptrb;
	*ptrb = c;	
}

int	main(void)
{
	int	a = 0;
	int	b = 1;

	int	*ptra;
	int	*ptrb;

	ptra = &a;
	ptrb = &b;

	printf("%d %d \n", a, b);
	ft_swap(ptra, ptrb);
	printf("%d %d \n", a, b);
	return (0);
}
