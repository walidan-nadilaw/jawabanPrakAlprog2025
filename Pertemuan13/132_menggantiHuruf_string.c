#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 10001

int main() {
    char ori, ganti;
    scanf("%c %c ", &ori, &ganti);

    char text[SIZE];
    while (fgets(text, SIZE, stdin) != NULL){
        for (int i = 0; text[i] != '\0'; i++)
        {
          if (tolower(text[i]) == tolower(ori)) {
              if (isupper(text[i])) printf("%c",toupper(ganti));
              else printf("%c",tolower(ganti));
          } else printf("%c",text[i]);
        }
    }

    return 0;
}
