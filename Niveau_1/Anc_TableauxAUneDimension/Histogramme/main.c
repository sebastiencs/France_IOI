#include <stdio.h>
#include <stdlib.h>

int main()
{
  char NbAnnee;
  char ChiffreAffaire[200] = {0};
  int PlusGrandChiffreAffaire;
  int i;
  
  scanf("%d", &NbAnnee);

  for (i = 0; i < NbAnnee; i++)
    scanf("%d", &ChiffreAffaire[i]);

  for (i = 0; i <= NbAnnee; i++)
    {
      if (ChiffreAffaire[i] > PlusGrandChiffreAffaire)
	PlusGrandChiffreAffaire = ChiffreAffaire[i];
    }

  while (PlusGrandChiffreAffaire != 0)
    {
      for (i = 0; i < NbAnnee; i++)
	{
	  if (ChiffreAffaire[i] >= PlusGrandChiffreAffaire)
	    printf("#");
	  else
	    printf(" ");
	}
      printf("\n");
      PlusGrandChiffreAffaire--;
    }

  
}
