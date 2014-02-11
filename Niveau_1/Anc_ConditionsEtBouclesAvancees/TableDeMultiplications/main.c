#include <stdio.h>
#include <stdlib.h>

int main()
{
  int NumeroDeLigne = 1, NumeroDeColonne = 1;
  
  while (NumeroDeLigne <= 10)
    {
      for (NumeroDeColonne = 1; NumeroDeColonne <= 10; NumeroDeColonne++)
	{
	  printf("%d", NumeroDeColonne * NumeroDeLigne);
	  printf("\t");
	}
      printf("\n");
      NumeroDeLigne++;
      
    }
  
}
