#include <stdio.h>

int     nbValeurs;
int     valeurs[20001];
int     idBac[20001];

int     indexDuMaximum(int nbRestant)
{
  int   indexDuMax = 0;
  int   index;
  for (index = 0; index < nbRestant; index++)
    if (valeurs[index] > valeurs[indexDuMax])
      indexDuMax = index;
  return indexDuMax;
}

void    echange(int indexA, int indexB)
{
  int   temp2;
  int   temp = valeurs[indexA];
  valeurs[indexA] = valeurs[indexB];
  valeurs[indexB] = temp;

  temp2 = idBac[indexA];
  idBac[indexA] = idBac[indexB];
  idBac[indexB] = temp2;
}

void    triSelection()
{
  int   nbRestant;
  for (nbRestant = nbValeurs; nbRestant > 0; nbRestant--)
    echange( indexDuMaximum(nbRestant), nbRestant-1);
}

int     main()
{
  int   i;
  int   temp;

  scanf("%d", &nbValeurs);
  
  for (i = 0; i < nbValeurs; i++)
    scanf("%d %d", &idBac[i], &valeurs[i]);

  triSelection();

  for (i = 1; i < nbValeurs; i++)
    {
      if (valeurs[i] == valeurs[i - 1])
        if (idBac[i] < idBac[i - 1])
          {
            temp = idBac[i];
            idBac[i] = idBac[i - 1];
            idBac[i - 1] = temp;
          }
    }

  
  for (i = 0; i < nbValeurs; i++)
    printf("%d %d\n", idBac[i], valeurs[i]);

    
  return 0;
}
