#include <stdio.h>
#include <string.h>

int main()
{
  char LettrePlusPresente;
  int Texte[201];
  int NbChar;
  int NombrePlusGrand[201] = {0};
  int i, z;
  

  scanf ("%d", &NbChar);
  for (i = 0; i <= NbChar; i++)
    Texte[i] = getchar();
  
  for (i = 1; i <= NbChar; i++)
    {
      for (z = 1; z <= NbChar; z ++)
	{
	  if (Texte[i] == Texte[z])
	    NombrePlusGrand[i]++;
	  if (Texte[i] == (Texte[z] - 32 ))
	    NombrePlusGrand[i]++;
	}
      for (z = 1; z <= i; z++)
	{
	  if (NombrePlusGrand[z] < NombrePlusGrand[z - 1])
	    LettrePlusPresente = Texte[z];
	}
    }
  printf("%c", LettrePlusPresente);
 

  return 0;
  
}
