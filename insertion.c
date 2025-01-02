#include <stdio.h>

void insertionSort(int v[], int tam){

  for(int i = 0; i < tam; i++){
   int a = v[i];
   int j = i - 1;

    while(j >= 0 && v[j]>a){
      v[j+1] = v[j];
      j = j - 1;
    }
    v[j + 1] = a;
  }

}


 int main(){

  int v[] = {9,6,5,4,1,2,3,8,7};
  int tam = sizeof(v)/sizeof(int);

  insertionSort(v,tam);

  for(int i = 0; i < tam; i++)
    printf("%d ", v[i]);



  return 0;
}
