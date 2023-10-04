#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void  Dont_reapet(char *str)
{
        if (*str){
        if (str[0] == str[1])
            return (Dont_reapet(++str));
       printf("%c", *str); 
       return Dont_reapet(++str);
     }
}


int main(int argc, char **argv)
{
   if (argc == 2)
      Dont_reapet(argv[1]);
   else 
      printf("\n");
  return 0;
}
