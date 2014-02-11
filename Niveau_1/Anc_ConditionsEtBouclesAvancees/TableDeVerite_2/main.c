#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, c;
  
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  
  if ( (a && b && c) || (!a && !b && !c) || (!a && b && !c) || (a && b && !c))
    printf("1");
  else
    printf("0");
}

  
