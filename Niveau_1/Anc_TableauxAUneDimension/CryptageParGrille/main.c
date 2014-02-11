#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
    char Grille[26];
    int NbChar, i = 0, z = 0;
    int Texte[250];

    scanf("%s", Grille);
    scanf("%d", &NbChar);
    
    for (i = 0; i <= NbChar; i++)
	Texte[i] = getchar();
	
    
    for (i = 1; i <= NbChar; i++)
      {
	if ((Texte[i] >= 'A' && Texte[i] <= 'Z') || ((Texte[i] >= 'a' && Texte[i] <= 'z') ))
	  {
	    for (z = 0; z < 26; z++)
	      {
		if (Texte[i] == Alphabet[z])
		  printf ("%c", Grille[z]);
		if (Texte[i] == (Alphabet[z] - 32))
		  printf ("%c", Grille[z] - 32);
	      }
	  }
	else 
	  printf ("%c", Texte[i]);
	}

    return 0;
}
