#include<stdio.h>

int	main()
{
  char grille[8][8] = 0;
  int i, z;

  for (i = 0; i < 2; i++)
    {
      for (z = 0; z < 8; z++)
	{
	  scanf("%c", &grille[i][z]);
	}
    }

  for (i = 0; i < 2; i++)
    {
      for (z = 0; z < 9; z++)
        {
          printf("%c", grille[i][z]);
        }
      printf("\n");
    }
}
