#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n; scanf("%d", &n);
    getchar();
    char SatuKalimat[100];
    char* delim = ";";
    double tot_umur=0;
    char* nama;
    char* str_umur;

    for(int i=0; i<n; i++){
        fgets(SatuKalimat, 100, stdin);
        SatuKalimat[strcspn(SatuKalimat, "\n")]='\0';
        str_umur = strtok(SatuKalimat, delim);
        nama = strtok(NULL, delim);
        
        tot_umur += atoi(str_umur);
        printf("%s\n", nama);
    }
    printf("%.2f", tot_umur/n);
}