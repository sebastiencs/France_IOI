#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compareTextes(const void* pTexte1, const void* pTexte2)
{
  return strcmp((char*)(pTexte1), (char*)(pTexte2) );
}


int main()
{
  int	nbMots = 0, i = 0, z = 0;
  char	mot1[51], mot2[51];
  char	dict[1000][102];

  scanf("%d\n", &nbMots);

  for (i = 0; i < nbMots; i++)
    {
      z = 0;
      scanf("%s %s", mot1, mot2);
      while (mot2[z] != '\0')
	z++;
      mot2[z] = 32;
      mot2[z + 1] = '\0';
      strcpy(dict[i], mot2);
      strcat(dict[i], mot1);
    }

  qsort (dict, nbMots, 102 * sizeof(char), compareTextes);

  for (i = 0; i < nbMots; i++)
    printf("%s\n", dict[i]);

  return 0;
}
