
#include <stdio.h>
#include <math.h>
int isPrime(int x);
int inputNumberPositive();

int main(){
	int n = inputNumberPositive();
	printf("\nCac so nguyen to tu 1 den %d la: \n",n);
	for(int i=1;i<=n;i++){
		if(isPrime(i)){
			printf("%d  ",i);
		}
	}
}

int isPrime(int x){
	if(x<2)
		return 0;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}

int inputNumberPositive(){
	int n = 0;
	do{
		printf("Nhap so nguyen duong n: ");
		scanf("%d",&n);
		if(n<1){
			printf("\nNhap lai n\n");
		}
	}while(n<1);
	return n;
}

