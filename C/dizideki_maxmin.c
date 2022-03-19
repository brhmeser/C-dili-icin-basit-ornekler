#include <stdio.h>
int maxEleman(int arr[], int n){
  int i ;
  int max = arr[0];
  for(i = 1; i < n; i++)
  {
    max = arr[i] > max ? arr[i] : max;
  }
  return max;
}

int main () {
	int A[7] = {50,-20,30,70,-40,-10,60};
	int B[9] = {5,10,-5,35,-10,20,-15,15,25};
	printf("A dizisinde max eleman = %d\n",maxEleman(A,7));
	printf("B dizisinde max eleman = %d\n",maxEleman(B,9));
	return 0 ;
}
