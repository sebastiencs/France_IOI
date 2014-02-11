#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, c;
  
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  if (b || (a && c))
    printf("1");
  else
    printf("0");
  
  

}
