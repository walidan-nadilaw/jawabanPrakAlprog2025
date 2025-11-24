#include <stdio.h>
#include <ctype.h>

int main(){
    char ori, ganti; // ori = original, ganti = replacement
    scanf("%c %c ", &ori, &ganti); 

    //ubah semuanya jadi lower agar tidak case sensitive
    ori = tolower(ori);
    ganti = tolower(ganti);

    //baca karakter sampai EOF
    char ch;
    while((ch=getchar()) != EOF)
    {
      if( tolower(ch) == ori ) 
        ch+= ganti - ori; //geser ch sebesar selisih ganti dan ori
      printf("%c", ch);  
    }
}