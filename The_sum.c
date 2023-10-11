#include <stdio.h>

void fibonacia(int tab[])
{
	tab[0] = 0;
	tab[1] = 1;
	for(int i = 2; i < 41; i++)
	{
		tab[i] = tab[i - 1] + tab[i - 2];
	}
}
int main() {
    int n;
    int tab[41];
    scanf("%d", &n);
    fibonacia(tab);
    if (n > 0 && n < 41) {
        int summ = 0;
        for (int i = 0; i <= n; i++) {
            summ += tab[i];
        }
        printf("%d\n", summ);
    }
 
    return 0;
}
