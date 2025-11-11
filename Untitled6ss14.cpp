#include <stdio.h>

int count(int arr[],int n );
int max(int arr[],int n);
int main(){
	       int n=0;
	       int arr[100];
	       printf("Moi ban nhap so phan tu cua mang:");
	        scanf("%d",&n);
	         int i;
	         int maxValue;
	for(i=0;i<n;i++){
	    printf("arr[%d]=",i);
	    scanf("%d",&arr[i]); 
    }
	count(arr,n);
	maxValue=max(arr,n);	
	printf("\n\n\nGia tri lon nhat cua mang =%d",maxValue);
}
         int count(int arr[],int n){
	int i;
	printf("\nCac phan tu co trong mang:");
	for(i=0;i<n;i++){
		printf("\narr[%d]=%d",i,arr[i]);
	}
	return arr[i];
}
int max(int arr[],int n ){
	int max=arr[0];
	for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max= arr[i];
        }
    }
    return max;
}

