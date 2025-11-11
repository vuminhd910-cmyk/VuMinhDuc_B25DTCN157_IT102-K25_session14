#include <stdio.h>
#include <math.h>
 int tinhTong(int a, int b) { 
    int tong = a + b;
    return tong;
}

int main() {
    int so1 = 15;
    int so2 = 7;
    int ketQua = tinhTong(so1, so2);
    printf("So thu nhat: %d\n", so1);
    printf("So thu hai: %d\n", so2);
    printf("Tong cua hai so la: %d\n", ketQua);
    
    return 0;
}
	

