#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d;
    a = 4 + 2;
    b = ++a;
    c = a * b++;
    d = pow(c,2);
    printf("%f", d);
}
