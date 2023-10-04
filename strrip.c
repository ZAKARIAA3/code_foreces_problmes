#include <stdio.h>
#include <unistd.h>

void strip(char *str)
{
      int i = 0; 
      int j = 0;
      while (str[i])
        {
          i++;
        }
       i--;
       while (i >= 0)
          {
              if (str [i] == ' ')
                  i--;
              else 
                break;
          }
     while (str[j] && str[j] == 32)
       {
              j++;
       }
     while (str[j] && (j <= i))
          {
              write(1, &str[j],1);
              j++;
          }
}

int main(int argc, char *argv[])
{
      if(argc == 2)
          {
               strip(argv[1]);
               printf("\n");
          }
}
