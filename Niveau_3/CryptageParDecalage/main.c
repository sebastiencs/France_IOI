#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main()
{
  char	texte[1001];
  int	taille = 0, i = 0, decalage = 0, nbPages = 0, numPage = 0;

  printf("%d\n", (4-10) % 26);

  scanf("%d\n", &nbPages);
  for (numPage = 2; numPage <= nbPages; numPage++)
  {
    gets(texte);
    taille = strlen(texte);
    if (!(numPage % 2))
      {
	decalage = -3 * numPage;
	for (i = 0; i < taille; i++)
	  {
	    if (islower(texte[i]))
	      {
		if ((texte[i] + decalage) < 'a')
		  printf("%c", 26 + (((texte[i] - 97) + decalage) % 26) + 97);
		else
		  printf("%c", texte[i] + decalage);
	      }
	    else if (isupper(texte[i]))
	      {
		if ((texte[i] + decalage) < 'A')
		  printf("%c", 26 + (((texte[i] - 65) + decalage) % 26) + 65);
		else
		  printf("%c", texte[i] + decalage);
	      }
	    else
	      printf("%c", texte[i]);
	  }
      }
    else
      {
	decalage = 5 * numPage;
	for (i = 0; i < taille; i++)
	  {
	    if (islower(texte[i]))
	      printf("%c", (((texte[i] - 97) + decalage) % 26) + 97);
	    else if (isupper(texte[i]))
	      printf("%c", (((texte[i] - 65) + decalage) % 26) + 65);
	    else
	      printf("%c", texte[i]);
	  }
      }
    printf("\n");
  }
  return 0;
}
