#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int km_titik[n];

  for(int i=0; i<n; i++){
    scanf("%d", &km_titik[i]);
  }
  
  int km_tukeran = -1;
  int tinggi_tertinggi = -1;
  double curam_tercuram = -1.0;
  
  int j=0;
  while(j<n-1){
    
    if( km_titik[j] < km_titik[j+1] ){
      
      int km_awal = j;
      int km_akhir = j+1;
      
      while( km_titik[km_akhir] < km_titik[km_akhir+1] && j < n-1){
        km_akhir++;
      }
      
      int tinggi_skrng = km_titik[km_akhir] - km_titik[km_awal];
      int jarak_skrg = km_akhir - km_awal;
      double curam_skrg = (double) tinggi_skrng/jarak_skrg;
      
      if( tinggi_skrng > tinggi_tertinggi) {
        km_tukeran = km_awal;
        tinggi_tertinggi = tinggi_skrng;
        curam_tercuram = curam_skrg;
      }
        
      else if( tinggi_skrng == tinggi_tertinggi && curam_skrg > curam_tercuram){
        km_tukeran = km_awal;
        tinggi_tertinggi = tinggi_skrng;
        curam_tercuram = curam_skrg; 
      }
      
      j = km_akhir;

    }
    else j++;
  }
  
  printf("%d", km_tukeran);
}