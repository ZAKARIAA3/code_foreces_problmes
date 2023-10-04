#include <stdio.h>
#include <stdlib.h>


int main()
{
   int result_prob = 0;
   int count_digit = 0;
   int n;
   int m[1000][3];
   scanf("%d", &n);
   if (n >=1 && n <= 1000)
    {
       for (int i = 0; i < n; i++)
           {   count_digit = 0;
              for(int j = 0; j < 3; j++)
                  {
                     scanf("%d", &m[i][j]);
                     if (m[i][j] == 1) count_digit++;
                  }
               if (count_digit >= 2) result_prob++;
           }
      printf("%d", result_prob); 
    }
  return 0;
}
