#include <stdio.h>
int gcd(int a,int b);
int main(){
	int a,b;
	printf("Moi ban nhap so a:");
	scanf("%d",&a);
	printf("Moi ban nhap so b:");
	scanf("%d",&b);
	printf("%d",gcd(a,b%a));
}
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}

