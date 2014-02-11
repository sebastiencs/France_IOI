#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	valAbs(int val)
{
  if (val < 0)
    return -val;
  else
    return val;
}

int	main()
{
  int	nbPages = 0, i = 0, numPage = 0, taille = 0, decalage = 0;
  char	texte[1001];

  char	test[1001];// = "Ikio kyz rg ykiutjk vgmk ja robxk";
  char	bonneLettre;
  int	dec, teste;

  scanf("%d\n", &nbPages);
  for (numPage = 2; numPage <= nbPages; numPage++)
    {
      gets(test);
      taille = strlen(test);

      if (!(numPage % 2))
        decalage = -3 * numPage;
      else
        decalage = 5 * numPage;

      while (dec > taille)
	dec -= taille + 1;

      for (i = 0; i < taille; i++)
	{
	  if (islower(test[i]))
	    {
	      if ((test[i] - dec) < 'a')
		bonneLettre = test[i] + (26 - dec);
	      else
		bonneLettre = test[i] - dec;
	      printf("%c", bonneLettre);
	    }
	  else if (isupper(test[i]))
	    {
	      if (test[i] - dec < 'A')
		bonneLettre = test[i] + (26 - dec);
	      else
		bonneLettre = test[i] - dec;
	      printf("%c", bonneLettre);
	    }
	  else
	    printf("%c", test[i]);
	}
    }


  /**scanf("%d\n", &nbPages);

  for (numPage = 2; numPage <= nbPages; numPage++)
    {
      gets(texte);
      taille = strlen(texte);

      if (!(numPage % 2))
	decalage = 3 * numPage;
      else
	decalage = -5 * numPage;


      for (i = 0; i < taille; i++)
	{
	  if (isalpha(texte[i]))
	    {
	      printf("%c", (texte[i] + decalage));
	    }
	}
    }
  **/
  return 0;
}
