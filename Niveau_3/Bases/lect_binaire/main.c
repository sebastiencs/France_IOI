#include <stdio.h>
#include <unistd.h>

int		puissance(char buffer, int pow)
{
	int	nbr;

	nbr = 1;
	if (buffer == '0')
		return (0);
	while (pow)
	{
		nbr = nbr * 2;
		pow--;
	}
	return (nbr);
}

void	aff_dec(char *buffer, int size)
{
	int	nbr;
	int	i;

	nbr = 0;
	i = 0;
	size = size - 1;
	while (size)
	{
		nbr += puissance(buffer[i], size);
		i++;
		size--;
	}
	if (buffer[i] - 48)
		nbr += 1;
	printf("%d\n", nbr);
}

int	main()
{
	char	buf;
	char	buffer[27];
	int		i;

	i = 0;
	buf = 0;
	while (buf != '\n')
	{
		read(0, &buf, 1);
		buffer[i] = buf;
		i++;
	}
	i = i - 1;
	aff_dec(buffer, i);
	return (0);
}
