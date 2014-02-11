#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main()
{
  char	texte[10001];
  int	alpha[27];
  int	i = 0, taille = 0, nbLettres = 0;

  gets(texte);
  taille = strlen(texte);

  for(i = 0; i < taille; i++)
    {
      if (isupper(texte[i]))
	texte[i] = tolower(texte[i]);
      if (isalpha(texte[i]))
	alpha[texte[i] - 97]++;
    }

  for (i = 0; i < 26; i++)
    nbLettres += alpha[i];

  for (i = 0; i < 26; i++)
    printf("%lf\n", (double)(alpha[i]) / nbLettres);

  return 0;
}
