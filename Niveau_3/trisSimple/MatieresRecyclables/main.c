#include <stdio.h>

int     main()
{
  int   nbElements;
  int   i, j;
  char  mot[10001][101];

  scanf("%d", &nbElements);

  for (i = 0; i < nbElements; i++)
    {
      for (j = 0; j < 101; j++)
        {
          scanf("%c", mot[i][j]);
        }
    }

  for (i = 0; i < nbElements; i++)
    {
      for (j = 0; j < 101; j++)
        {
          printf("%c", mot[i][j]);
        }
      printf("\n");
    }

  
  
  return 0;
}
