#include <stdio.h>
#include <string.h>

void capitlize(char *str)
{
   if(*str >= 'a' && *str <= 'z')
       {
           *str -= 32;
       }
}

int main()
{
   char str[1001];
   scanf("%s", str);
   capitlize(str);
   printf("%s", str);
   return 0;
}
