#include <stdio.h>
#include <stdio.h>

 
long long tinhGiaiThua(int n) {
     
    if (n == 0) {
        return 1;
    } 
    else {
        return n * tinhGiaiThua(n - 1);
    }
}
int main() {
    int soNguyen = 10;  
    if (soNguyen < 0) {
        printf("Khong the tinh giai thua cho so am.\n");
    } else {
        long long ketQua = tinhGiaiThua(soNguyen);
        printf("Giai thua cua %d la: %lld\n", soNguyen, ketQua);
    }
    int soKhac = 0;
    long long ketQuaKhac = tinhGiaiThua(soKhac);
    printf("Giai thua cua %d la: %lld\n", soKhac, ketQuaKhac);

    return 0;
}
