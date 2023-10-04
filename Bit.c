#include <stdio.h>

void traitement(char *str, int *x)
{    int count;
     while (*str)
     {
          if (*str == '+' || *str == '-')
            str++;
          else if(*str == 'x')
              (*x)++;
              break;
     }
}

int main()
{
     int n;
     int x = 0; 
     char str[3];
     scanf("%d",&n);
     for (int i = 0; i < n; i++)
     {
        scanf("%s",str);
        traitement(str, &x);
     }
     printf("%d",x);
     return 0;
}
