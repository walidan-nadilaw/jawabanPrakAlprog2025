#include <stdio.h>
#include <string.h>

void swap(char a[], char b[]) {
    char temp[40];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int partition(char arr[][35], int low, int high) {
    char pivot[35];
    strcpy(pivot, arr[low]);

    int i = low + 1;
    int j = high;

    while (1) {
        while (i <= high && strcmp(arr[i], pivot) < 0) i++;
        while (j >= low && strcmp(arr[j], pivot) > 0) j--;

        if (i >= j) break;

        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(char arr[][35], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    char daftarNorek[5002][35];
    int n;

    scanf("%d", &n);
    getchar(); // buang newline

    for (int i = 0; i < n; i++) {
        fgets(daftarNorek[i], sizeof(daftarNorek[i]), stdin);
        daftarNorek[i][strcspn(daftarNorek[i], "\n")] = '\0';
    }

    quickSort(daftarNorek, 0, n - 1);

    int i = 0;
    while (i < n) {
        int count = 1;
        while (i + count < n && strcmp(daftarNorek[i], daftarNorek[i + count]) == 0) {
            count++;
        }
        printf("%s %d\n", daftarNorek[i], count);
        i += count;
    }

    return 0;
}
