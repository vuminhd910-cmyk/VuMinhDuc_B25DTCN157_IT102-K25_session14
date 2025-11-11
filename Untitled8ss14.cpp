#include <stdio.h>
int isPerfect(int x);
void showAllPerfect(int n);
int main(){
	int n;
	printf("Nhap vao so nguyen duong n:");
	scanf("%d",&n);
	showAllPerfect(n);
	return 0;
}
int isPerfect(int x){
	int sum=0;
	for(int i=1;i<=x/2;i++){
		if(x%i==0){
			sum=sum+i;
		}
	}
	if(sum==x){
		return 1;
	} else{
		return 0;
	}
}
void showAllPerfect(int n){
	printf("Cac so hoan hao tu 1 den %d la:\n",n);
	for(int i=1;i<=n;i++){
		if(isPerfect(i)){
			printf("%d ",i);
		}
	}
}
	

