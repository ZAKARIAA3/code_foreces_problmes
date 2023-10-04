#include <stdio.h>

char my_tolower(char c) {
    if (c >= 'A' && c <= 'Z') {
        // Si le caractère est une majuscule, convertissez-le en minuscule.
        return c + 32;
    } else {
        // Sinon, retournez le caractère inchangé.
        return c;
    }
}
int main()
{
	char ch = 'A';
	printf("Avant : %c\n", ch);
	ch = my_tolower(ch);
	printf("Après : %c\n", ch);
    return 0;
}

