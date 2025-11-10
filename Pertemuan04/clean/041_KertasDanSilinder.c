#include <stdio.h>

int main()
{
    double pi = 3.14159;
    double R, R1, T, T1, V, V1, X, R2, T2, V2, Vol = 0.0;
    double lebar, tinggi;

    while (1){
        scanf("%lf", &lebar);
        if (lebar == -1) {break;}

        scanf("%lf", &tinggi);
        R1 = tinggi / (2 * pi + 2);
        V1 = pi * R1 * R1 * lebar;

        R2 = lebar / 2;
        T2 = lebar;
        V2 = pi * R2 * R2 * T2;

        if ( (2 * R1) >= lebar) {Vol = V2;}
        else {Vol = V1;}

        R = lebar / (2 * pi);
        X = 2 * R;
        T = tinggi - X;
        V = pi * R * R * T;

        if (V > Vol) {printf("%.3lf\n", V);}
        else {printf("%.3lf\n", Vol);}
    }
    return 0;
}