#include <stdio.h>
#include <stdlib.h>

int	main()
{
  int	grille[20][20];
  int	nbCases;
  int	i, z;
  int	bon = 1, resultat[800] = {0};
  
  scanf("%d", &nbCases);
  

  
  for(i = 0; i < nbCases; i++)
    {
      for(z = 0; z < nbCases; z++)
	{
	  scanf("%d", &grille[i][z]);
	}
    }
  //Calcul des lignes
  for(i = 0; i < nbCases; i++)
    {
      for(z = 0; z < nbCases; z++)
	{
	  resultat[i] += grille[i][z];
	}
    }
  //Calcul des colonnes
  for(i = 0; i < nbCases; i++)
    {
      for(z = 0; z < nbCases; z++)
        {
          resultat[i + nbCases] += grille[z][i]; 
        }      
    }
  //Calcul de la diagonale de haut en bas
  for(i = 0; i < nbCases; i++)
    {
      resultat[nbCases * 2] += grille[i][i];       
    }
  //calcul de la diagonnale de bas en haut
  z = 0;
  for(i = nbCases - 1; i >= 0; i--)
    {
      resultat[(nbCases * 2) + 1] += grille[i][z];      
      z++;
    }
  
  for(i = 1; i <= ((nbCases * 2)) + 1; i++)
    {
      if (resultat[i] != resultat[i - 1])
	bon = 0;
    }
  
  if (bon)
    printf ("yes");
  else
    printf ("no");
   

  



  /**  for(i = 0; i < nbCases; i++)
    {    
      for(z = 0; z < nbCases; z++)
	{
	  printf ("%d ", resultat[i]);
	}
      printf("\n");
    }
  **/
}
