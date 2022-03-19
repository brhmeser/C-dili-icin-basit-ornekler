#include <stdio.h>

int main(){
  int n;
  int i;


  printf("Eleman sayisi gir: ");
  scanf("%d",&n) ;
  
 
  int arr[n]; 
  for(i = 0 ; i < n; i++){
   printf("Eleman gir: ");
    scanf("%d", &arr[i]);   
	
	
}
   for(i = 1; i < n; i++){
   
    int key = arr[i];
    int j = i - 1; 
    while(j >= 0 && arr[j] > key){
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
   printf("Sirali dizi:\n");
   for(i = 0; i < n; i++){
   printf("%d ", arr[i]);   
  }
}
