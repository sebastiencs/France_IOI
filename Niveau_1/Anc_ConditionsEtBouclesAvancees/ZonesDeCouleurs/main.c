#include <stdio.h>
#include <stdlib.h>

int main()
{
  int NbPersonnes;
  int X, Y;
  int Rouge, Bleu, Jaune, CarreJaune, Dehors;

  scanf("%d", &NbPersonnes);

  while (NbPersonnes > 0)
    {
      scanf("%d", &X);
      scanf("%d", &Y);
  
      Rouge = ((X >= 15 && X <= 45) || (X >= 60 && X <= 85)) && (Y >= 60 && Y <= 70);
      Bleu = ((X >= 10 && X <= 85) && (Y >= 10 && Y <= 55));
      CarreJaune = ((X >= 25 && X <= 50) && (Y >= 20 && Y <= 45));
      Dehors = ((X < 0 || X > 90) || (Y < 0 || Y > 70));
      Jaune = ((X >= 0 && X <= 90) && (Y >= 0 && Y <= 70) && !Bleu && !Rouge);
  
  


      if (Rouge)
	printf("Dans une zone rouge\n");
      if (Bleu && !CarreJaune)
	printf("Dans une zone bleue\n");
      if (Dehors)
	printf("En dehors de la feuille\n");
      if (Jaune || CarreJaune)
	printf("Dans une zone jaune\n");

      NbPersonnes--;
    }
}
