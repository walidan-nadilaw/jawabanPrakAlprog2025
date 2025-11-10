#include <stdio.h>

int main()
{
    double pi = 3.14159;
    double R3, R1, T3, T1, V3, V1, X, R2, T2, V2, Vol = 0.0;
    double lebar, tinggi;

    while (1){
        scanf("%lf", &lebar);
        if (lebar == -1) {break;} // kalau ternyata nilai sentinel

        scanf("%lf", &tinggi);
        R1 = tinggi / (2 * pi + 2);
        V1 = pi * R1 * R1 * lebar;

        R2 = lebar / 2;
        T2 = lebar;
        V2 = pi * R2 * R2 * T2;

        R3 = lebar / (2 * pi);
        X = 2 * R3;
        T3 = tinggi - X;
        V3 = pi * R3 * R3 * T3;

        if ((2 * R1) >= lebar) {Vol = V2;}
        else {Vol = V1;}
        if(V3 > Vol) Vol = V3;

        printf("%.3lf\n", Vol);
    }
    return 0;
}