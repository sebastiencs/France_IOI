#include <stdio.h>
#include <stdlib.h>

int compareEntier(const void* pEntier1, const void* pEntier2)
{
  return ( *(int*)(pEntier1) - *(int*)(pEntier2) );
}

int     main ()
{
  int   nbBacs;
  int   tableau[50001];
  int   indice;

  scanf("%d", &nbBacs);
  for (indice = 0; indice < nbBacs; indice++)
    scanf("%d", &tableau[indice]);
  
  qsort(tableau, nbBacs, sizeof(int), compareEntier);

  for (indice = 0 ; indice < nbBacs ; indice = indice + 1)
    {
      printf ("%d ", tableau[indice]);
    }

  return 0;
}
