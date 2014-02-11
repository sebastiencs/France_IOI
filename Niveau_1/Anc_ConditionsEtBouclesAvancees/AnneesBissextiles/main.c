#include <stdio.h>
#include <stdlib.h>

int main()
{
  int Annee;
  char Bissextile = 0;
    
  scanf("%d", &Annee);
  
  if (Annee % 4 == 0)
    Bissextile = 1;
  if (Annee % 100 == 0 && Annee % 400 != 0)
    Bissextile = 0;
  
  if (Bissextile == 1)
    printf("bissextile");
  else
    printf("non bissextile");
}
