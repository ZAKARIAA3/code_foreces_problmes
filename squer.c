#include <stdio.h>
 
int main() {
     unsigned long long n, m, a;
    scanf("%llu %llu %llu", &n, &m, &a);
 
    unsigned long long horizontal_tiles = n / a;
    unsigned long long vertical_tiles = m / a;
    if ((n % a) != 0)
    {
         horizontal_tiles++;
    }
    if ((m % a) != 0)
    {
         vertical_tiles++;
    }
    unsigned long long total_tiles = horizontal_tiles * vertical_tiles;
 
    printf("%llu\n", total_tiles);
    return 0;
}

