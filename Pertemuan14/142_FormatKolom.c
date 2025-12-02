#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n; scanf("%d", &n);
    getchar();
    char SatuKalimat[41];
    char* nama;
    char str_umur[3];
    double tot_umur=0;

    for(int i=0; i<n; i++){
        fgets(SatuKalimat, 41, stdin);
        SatuKalimat[strcspn(SatuKalimat, "\n")]='\0';
        str_umur[0]=SatuKalimat[0];
        str_umur[1]=SatuKalimat[1];
        str_umur[2]='\0';
        tot_umur+=atoi(str_umur);
        
        nama = SatuKalimat+2;
        printf("%s\n", nama);
    }
    printf("%.2f", tot_umur/n);
}
