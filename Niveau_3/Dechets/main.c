#include <stdio.h>

int	main()
{
  int	nbStock,
	nbCamion,
	nivPoluant[5001];
  int	i, j, res;

  scanf("%d %d", &nbStock, &nbCamion);

  i = 0;
  while ( i < nbStock ) {
    scanf("%d", &nivPoluant[i]);
    i++;
  }


  while ( j < nbCamion ) {
     i = 0;
     res = 0;
     while ( i < nbStock ) {
       if ( nivPoluant[i] > nivPoluant[res] )
	 res = i;
       i++;
     }
     printf("%d ", nivPoluant[res]);
     nivPoluant[res] = 0;
     j++;
  }

  return 0;
}
