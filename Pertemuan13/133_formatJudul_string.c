#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 10001

int main() {
    char text[SIZE];
    int startOfWord = 1;

    while (fgets(text, SIZE, stdin) != NULL) {
        for (int i = 0; text[i] != '\0'; i++) {

            if (startOfWord) {
                printf("%c", toupper(text[i]));
                startOfWord = 0;
            } else printf("%c", text[i]);

            if (isspace(text[i])) startOfWord = 1;
        }
    }

    return 0;
}
