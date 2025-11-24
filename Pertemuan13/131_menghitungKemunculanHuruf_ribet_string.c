#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int letterCount[26] = {0};
    char buffer[10001];

    while (fgets(buffer, sizeof(buffer), stdin) != NULL) {

        for (int i = 0; buffer[i] != '\0'; i++) {
            char c = tolower(buffer[i]);
            if (isalpha(c)) {
                letterCount[c - 'a']++;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        if (letterCount[i] > 0) {
            printf("%c %d\n", 'a' + i, letterCount[i]);
        }
    }

    return 0;
}
