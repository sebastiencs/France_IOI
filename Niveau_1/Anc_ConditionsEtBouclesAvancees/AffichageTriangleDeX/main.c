#include <stdio.h>
#include <stdlib.h>

int main()
{
  int Taille;
  int i, z, Compteur = 1;
  
  scanf("%d", &Taille);
  
  for(i = 0; i < Taille; i++)
    {
      for (z = 0; z < Compteur; z++)
	printf("X");
      Compteur++;
      printf ("\n");
      
    }
}

	  
