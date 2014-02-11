#include <stdio.h>
#include <stdlib.h>

int	main()
{
  int	grille[8][8] = {0};
  int	i, z;
  int	gagnant = 0;

  for (i = 0; i < 8; i++)
    {
      for (z = (0); z < 9; z++)
	{
	  scanf ("%c", &grille[i][z]);
	}
    }

  for (i = 0; i < 8; i++)
    {
      for (z = 0; z < 9; z++)
        {
	  if (grille[i][z] >= 'A' && grille[i][z] <= 'Z' && grille[i][z] != 'C')
	    grille[i][z] = '.';
	  else if (grille[i][z] >= 'a' && grille[i][z] <= 'z')
	    grille[i][z] = '0';
        }
    }

  /**
  printf("\n");
  for (i = 0; i < 8; i++)
    {
      for (z = 0; z < 8; z++)
        {
          printf ("%c", grille[i][z]);
        }
      printf("\n");
    }
  **/

  for (i = 0; i < 8; i++)
    {
      for (z = 0; z < 9; z++)
	{
	  if (grille[i][z] == 'C')
	    {
	      if (grille[i-1][z-2] == '0' || grille[i-2][z-1] == '0')
		gagnant = 1;
	      else if (grille[i-1][z+2] == '0' || grille[i-2][z+1] == '0')
		gagnant = 1;
	      else if (grille[i+1][z-2] == '0' || grille[i+2][z-1] == '0')
		gagnant = 1;
	      else if (grille[i+1][z+2] == '0' || grille[i+2][z+1] == '0')
		gagnant = 1;
	    }
	}
    }

  printf("\n");
  for (i = 0; i < 8; i++)
    {
      for (z = 0; z < 8; z++)
	{
	  printf ("%c", grille[i][z]);
	}
      printf("\n");
    }

  if (gagnant)
    printf("yes");
  else
    printf("no");
}
