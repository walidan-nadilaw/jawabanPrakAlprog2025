// props to whoever made this beautiful code

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define HASHTAG 50
#define KATA 100

int main() {
    char input[1000];
    char daftarhashtag[HASHTAG][KATA];
    int jumlah[HASHTAG] = {0};
    int totalhashtag = 0;
    while (scanf("%s", input) != EOF) {
        if (input[0] == '#') {
            char kata[KATA];
            strcpy(kata, input + 1);

            for (int i = 0; kata[i] != '\0'; i++) {
                kata[i] = tolower(kata[i]);
            }
            int ditemukan = 0;
            for (int i = 0; i < totalhashtag; i++) {
                if (strcmp(daftarhashtag[i], kata) == 0) {
                    jumlah[i]++;
                    ditemukan = 1;
                    break;
                }
            }
            if (!ditemukan) {
                strcpy(daftarhashtag[totalhashtag], kata);
                jumlah[totalhashtag] = 1;
                totalhashtag++;
            }
        }
    }
    int maks = 0, freqterbanyak = 0;
    for (int i = 0; i < totalhashtag; i++) {
        if (jumlah[i] > maks) {
            maks = jumlah[i];
            freqterbanyak = i;
        }
    }
    printf("%s", daftarhashtag[freqterbanyak]);
    return 0;
}