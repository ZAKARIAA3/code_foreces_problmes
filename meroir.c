#include <stdio.h>

int main()
{
    int N;
    printf("saisie un entier :");
    scanf("%d", &N);
    if (N == 0)
      printf("0");
    while (N > 0)
    {
          printf("%d", N%10);
          N /= 10;
    }
} 
