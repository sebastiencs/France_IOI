#include <stdio.h>

int     chercherMin(int *tableau, int taille)
{
  int i;
  int min;

  for (i = 0; i < taille; i++)
    {
      if (tableau[i] < tableau[min])
        min = i;
    }
  return min;
}




int     main()
{
  int   nbAutos;
  int   listDepart[1001];
  int   i, j;
  int   min;

  scanf("%d", &nbAutos);
  for (i = 0; i < nbAutos; i++)
    scanf("%d", &listDepart[i]);

  while








  
  /* for (i = 0, j = 0; i < nbAutos; i++) */
  /*   { */
  /*     if (listDepart[j] != (i + 1)) */
  /*       { */
  /*         while (listDepart[j] != (i + 1)) */
  /*           { */
  /*             j++; */
  /*           } */
  /*         printf("%d %d\n", listDepart[j - 1], listDepart[j]); */
  /*         temp = listDepart[j]; */
  /*         listDepart[j] = listDepart[j - 1]; */
  /*         listDepart[j - 1] = temp; */
  /*         j = 0; */
  /*         i = 0; */
  /*       } */
  /*     else */
  /*       i++; */
  /*   } */
              


  return 0;
}
