#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct norek {
    char nomorRekening[40];
    int count;
    struct norek* next;
} Norek;

Norek* createNode(char* str) {
    Norek* node = (Norek*) malloc(sizeof(Norek));
    strcpy(node->nomorRekening, str);
    node->count = 1;
    node->next = NULL;
    return node;
}

int main() {
    int n;
    scanf("%d ", &n);

    Norek* head = NULL;

    char input[100];

    for (int i = 0; i < n; i++) {
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';

        if (head == NULL) {
            head = createNode(input);
            continue;
        }

        Norek* curr = head;
        Norek* prev = NULL;

        while (curr && strcmp(input, curr->nomorRekening) > 0) {
            prev = curr;
            curr = curr->next;
        }

        if (curr && strcmp(input, curr->nomorRekening) == 0) {
            curr->count++;
        }
        else {
            Norek* newNode = createNode(input);

            if (prev == NULL) {
                newNode->next = head;
                head = newNode;
            } else {
                newNode->next = curr;
                prev->next = newNode;
            }
        }
    }

    Norek* p = head;
    while (p) {
        printf("%s %d\n", p->nomorRekening, p->count);
        p = p->next;
    }

    return 0;
}
