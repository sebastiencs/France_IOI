#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr)
{
	if (nbr > 1)
		ft_putnbr_base(nbr / 2);
	ft_putchar((nbr % 2) + 48);
}

int		main()
{
	int	nbr;

	scanf("%d", &nbr);
	ft_putnbr_base(nbr);
	return (0);
}
