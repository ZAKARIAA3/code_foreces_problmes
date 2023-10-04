#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w;
    printf("enter the w kilo :");
    scanf("%d", &w);
    if((w >= 1 && w <= 100) && w > 2 && (w % 2 == 0))
     { 
	printf("YES");
     }
    else 
    {
       printf("NO");
    }
  return 0;
}
