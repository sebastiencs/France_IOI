#include <stdio.h>
#include <stdlib.h>

int main()
{
  int NbLignes, NbColonnes;
  int i, z;
  
  scanf("%d", &NbLignes);
  scanf("%d", &NbColonnes);
  
  for (i = 0; i < NbLignes; i++)
    {
      for (z = 0; z < NbColonnes; z++)
	printf("X");
      printf("\n");
    }
  

}
