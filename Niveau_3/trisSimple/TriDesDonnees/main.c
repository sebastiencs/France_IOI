#include <stdio.h>

int     main()
{
  int   nbBacs;
  int   nivPoluant[1001];
  int   i;
  int   t;

  i = 0;
  
  scanf("%d", &nbBacs);
  while (i < nbBacs)
    {
      scanf("%d", &nivPoluant[i]);
      i++;
    }

  i = 0;

  while (i < nbBacs - 1)
    {
      if (nivPoluant[i] > nivPoluant[i + 1])
        {
          t = nivPoluant[i];
          nivPoluant[i] = nivPoluant[i + 1];
          nivPoluant[i + 1] = t;
          i = 0;
        }
      else
        {
          i++;
        }
    }

  for (i = 0; i < nbBacs; i++)
    printf("%d ", nivPoluant[i]);
  
  return 0;
}
