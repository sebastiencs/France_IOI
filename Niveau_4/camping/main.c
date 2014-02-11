#include <stdlib.h>
#include <stdio.h>

void	lire_grille(int **matrice, int nb_lignes, int nb_colonnes)
{
	int	i;
	int	j;
	int	buf;

	i = 0;
	j = 0;
	while (j < nb_lignes)
	{
		while (i < nb_colonnes)
		{
			scanf("%d ", &buf);
			if (buf == 1)
				buf = 0;
			else
				buf = 1;
			matrice[j][i] = buf;
			i = i + 1;
		}
		i = 0;
		j = j + 1;
	}
}

int		plus_petit(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a + 1);
	if (b <= a && b <= c)
		return (b + 1);
	return (c + 1);
}

int		trouve_carre(int **matrice, int nb_lignes, int nb_colonnes)
{
	int	i;
	int	j;
	int	max_size;

	i = 0;
	j = 0;
	max_size = 0;
	while (j < nb_lignes)
	{
		while (i < nb_colonnes)
		{
			if (i > 0 && j > 0 && matrice[j][i] != 0)
				matrice[j][i] = plus_petit(matrice[j - 1][i], matrice[j - 1][i - 1], matrice[j][i - 1]);
			if (matrice[j][i] > max_size)
				max_size = matrice[j][i];
			i = i + 1;
		}
		i = 0;
		j = j + 1;
	}
	return (max_size);
}

int	main()
{
	int	nb_lignes;
	int	nb_colonnes;
	int	**matrice;
	int	i;
	int	size;

	scanf("%d %d", &nb_lignes, &nb_colonnes);
	matrice = (int**)malloc(sizeof(int*) * nb_lignes);
	i = 0;
	while (i < nb_lignes)
	{
		matrice[i] = (int*)malloc(sizeof(int) * nb_colonnes);
		i = i + 1;
	}
	i = 0;
	lire_grille(matrice, nb_lignes, nb_colonnes);
	size = trouve_carre(matrice, nb_lignes, nb_colonnes);
	printf("%d\n", size);
	return (0);
}
