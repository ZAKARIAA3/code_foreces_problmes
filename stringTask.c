#include <stdio.h>
#include <ctype.h>

int main() {
    char str[101];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i') {
            printf(".%c", c);
        }
    }

    return 0;
}

