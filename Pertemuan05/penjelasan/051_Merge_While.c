#include <stdio.h>

int main(){
    // array 1 beserta ukurannya, dan array 2 beserta ukurannya
    int arr1[2000]={0}, n1 = 0, arr2[2000]={0}, n2 = 0, inp;

    // untuk ngescan array 1
    while (1)
    {
        scanf("%d", &inp);      // disimpen ketempat sementara, gak tau elemen apa nilai sentinel
        if (inp == -9) break;   // kalau ternyata nilai sentinel berarti udah selesai scan array 1
        arr1[n1] = inp;         // kalau ternyata elemen array 1, simpen di posisi n1
        n1++;                   // catat bahwa ukuran array 1 bertambah. Note: n1 = index paling akhir + 1
    }
    
    // untuk ngescan array 2
    while (1)
    {
        scanf("%d", &inp);
        if (inp == -9) break;
        arr2[n2] = inp;
        n2++;
    }

    // jalanin dua line di bawah ini buat ngecek berhasil atau enggak ngescan array 1 sama 2
    // for (size_t i = 0; i < n1; i++) printf("%d ", arr1[i]); printf("\nn1 = %d\n", n1);
    // for (size_t i = 0; i < n2; i++) printf("%d ", arr2[i]); printf("\nn2 = %d\n", n2);

    // buat ngebandingin nilai di index check dan nentuin mana yang lebih kecil
    int check1 = 0, check2 = 0;
    
    /*  loop ngebandingin nilai di array 1 sama nilai di array 2
        selama index yang pengen dibandingin lebih kecil dari ukuran array itu sendiri

        misal:
        2 5 9 -9
        4 8 10 15 20 -9
        
        check1 = 0, check2 = 0 --> 2 vs 4 --> 2 --> check1 = 1
        check1 = 1, check2 = 0 --> 5 vs 4 --> 4 --> check2 = 1
        check1 = 1, check2 = 1 --> 5 vs 8 --> 5 --> check1 = 2
        check1 = 2, check2 = 1 --> 9 vs 8 --> 8 --> check2 = 2
        check1 = 2, check2 = 2 --> 9 vs 10 --> 9 --> check1 = 3
        
        check1 = 3 dan n1 = 3 sehingga check1 tidak lebih kecil dari check2
        artinya array1 udah masuk semua
        gak perlu ngebandingin lagi
    */
    while (check1 < n1 && check2 < n2)
    {
        if (arr1[check1] <= arr2[check2])
        {
            printf("%d", arr1[check1]);
            check1++;
        } else
        {
            printf("%d", arr2[check2]);
            check2++;
        }
        printf(" ");
    }

    // untuk print kalau masih ada sisa
    // di contoh check1 = 3 (udah sama dengan n1) sedangkan check2 = 2 (masih ada sisa)
    while (check1 < n1)
    {
        printf("%d ", arr1[check1]);
        check1++;
    }

    while (check2 < n2)
    {
        printf("%d ", arr2[check2]);
        check2++;
    }
}