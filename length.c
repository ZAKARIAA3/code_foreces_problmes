#include <stdio.h>
#include <stdlib.h>

int length(char *str)
{
    if (*str == '\0')
     {
         return 0;
     }
    return (1 + length(str + 1));
}
 
int main(int argc, char **argv)
{ 
    int len = 0;
    if (argc == 2){
          len = length(argv[1]);
          printf("lenth of the string is :%d\n",len);
      }
    return 0;
}
