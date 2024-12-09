#include<stdio.h>
 void printArray(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}
int main(){
int arr[6]={1,2,3,4,5,6};
int n=6;
   printArray(arr,n);
   return 0;
}
