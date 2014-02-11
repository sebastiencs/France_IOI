#include<stdio.h>
#include "robot.h"

int	main()
{
  int	i;

  gauche();
  gauche();
  printf("Bonjour, laissez-moi vous aider\n");
  ramasser();
  for (i = 0; i < 32; i++)
    droite();
  deposer();
}
