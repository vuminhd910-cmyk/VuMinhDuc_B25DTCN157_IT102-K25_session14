#include <stdio.h>
int count(int arr[], int n);
int main(){
	int arr[100];
	int n ; 
	 printf("so luong phan tu cau mang la :");
	 scanf("%d",&n);
	 int i; 
	 for(i=0; i<n; i++){
	 	printf("arr[%d]=",i);
		 scanf("%d",&arr[i]); 
	 }
	 count(arr,n); 
} 
int count(int arr[],int n){
	int i; 
	printf(" cac phan tu co trong mang: ");
	for(i=0; i<n; i++){
		printf("\narr[%d]=%d",i,arr[i]); 
	} 
	return arr[i];
	 
} 

