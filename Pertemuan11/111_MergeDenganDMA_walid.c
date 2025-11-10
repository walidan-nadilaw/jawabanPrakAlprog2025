#include <stdio.h>
#include <stdlib.h>

int main(){
    int a= 0;
    int b= 0;
    int* arr=NULL;
    int* brr=NULL;
    int input;
    
    while(1){
      scanf("%d", &input);
      if(input == -9) break;
      arr = (int*)realloc(arr, (++a) * sizeof(int));
      arr[a-1]=input;
    }
    
    while(1){
      scanf("%d", &input);
      if(input == -9) break;
      brr = (int*)realloc(brr, (++b) * sizeof(int));
      brr[b-1]=input;
    }
    
    int at=0;
    int bt=0;
    while(at<a && bt<b){
      if(arr[at] <= brr[bt]){
        printf("%d ", arr[at]);
        at++;
      }
      else if (arr[at] > brr[bt]){
        printf("%d ", brr[bt]);
        bt++;
      }
    }
    
    while(at < a){
      printf("%d ", arr[at]);
      at++;
    }
    
    
    while(bt < b){
      printf("%d ", brr[bt]);
      bt++;
    }
}