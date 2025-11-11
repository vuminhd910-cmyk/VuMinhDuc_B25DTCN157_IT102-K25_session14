#include <stdio.h>
int nhapMang(int arr[]);
void phanTu(int arr[], int n);
int themPhanTu(int arr[], int n);
void suaPhanTu(int arr[], int n);
int xoaPhanTu(int arr[], int n);
void sapXepTang(int arr[], int n);
void sapXepGiam(int arr[], int n);
void timKiemTuyenTinh(int arr[], int n);
void timKiemNhiPhan(int arr[], int n);
void displayMenu(void);
int main(){
    int n = 0;
    int arr[100];
    int choice;

    do {
        displayMenu();
        printf("Moi ban nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                n = nhapMang(arr);
                break;

            case 2:
                phanTu(arr, n);
                break;

            case 3:
                n = themPhanTu(arr, n);
                break;

            case 4:
                suaPhanTu(arr, n);
                break;

            case 5:
                n = xoaPhanTu(arr, n);
                break;

            case 6: {
                char c;
                printf("a. Sap xep giam dan\n");
                printf("b. Sap xep tang dan\n");
                printf("Chon: ");
                scanf(" %c", &c);
                if(c == 'a') sapXepGiam(arr, n);
                else if(c == 'b') sapXepTang(arr, n);
                else printf("Lua chon khong hop le!\n");
                break;
            }

            case 7: {
                char c;
                printf("a. Tim kiem tuyen tinh\n");
                printf("b. Tim kiem nhi phan\n");
                printf("Chon: ");
                scanf(" %c", &c);
                if(c == 'a') timKiemTuyenTinh(arr, n);
                else if(c == 'b') {
                    sapXepTang(arr, n); 
                    timKiemNhiPhan(arr, n);
                }
                else printf("Lua chon khong hop le!\n");
                break;
            }
            case 8:
                printf("Thoat chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    } while (choice != 8);
    return 0;
}
int nhapMang(int arr[]) {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    return n;
}
void phanTu(int arr[], int n){
    printf("Mang hien tai: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int themPhanTu(int arr[], int n){
    int vt, gt;
    printf("Nhap vi tri muon them: ");
    scanf("%d", &vt);

    if(vt < 0 || vt > n){
        printf("Vi tri khong hop le!\n");
        return n;
    }
    printf("Nhap gia tri: ");
    scanf("%d", &gt);

    for(int i = n; i > vt; i--){
        arr[i] = arr[i - 1];
    }
    arr[vt] = gt;
    return n + 1;
}
void suaPhanTu(int arr[], int n){
    int vt, gt;
    printf("Nhap vi tri muon sua: ");
    scanf("%d", &vt);

    if(vt < 0 || vt >= n){
        printf("Vi tri khong hop le!\n");
        return;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &gt);

    arr[vt] = gt;
}
int xoaPhanTu(int arr[], int n){
    int vt;
    printf("Nhap vi tri muon xoa: ");
    scanf("%d", &vt);

    if(vt < 0 || vt >= n){
        printf("Vi tri khong hop le!\n");
        return n;
    }
    for(int i = vt; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    return n - 1;
}
void sapXepTang(int arr[], int n){
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(arr[i] > arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
    printf("Da sap xep tang dan.\n");
}
void sapXepGiam(int arr[], int n){
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(arr[i] < arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
    printf("Da sap xep giam dan.\n");
}
void timKiemTuyenTinh(int arr[], int n){
    int x;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            printf("Tim thay tai vi tri %d\n", i);
            return;
        }
    }
    printf("Khong tim thay!\n");
}
void timKiemNhiPhan(int arr[], int n){
    int x;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int left = 0, right = n - 1;

    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] == x){
            printf("Tim thay tai vi tri %d\n", mid);
            return;
        } else if(arr[mid] > x){
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    printf("Khong tim thay!\n");
}
void displayMenu(void){
    printf("\n-------------------Menu------------------\n");
    printf("1. Nhap mang\n");
    printf("2. In mang\n");
    printf("3. Them phan tu vao vi tri chi dinh\n");
    printf("4. Sua phan tu o vi tri chi dinh\n");
    printf("5. Xoa phan tu o vi tri chi dinh\n");
    printf("6. Sap xep\n");
    printf("7. Tim kiem\n");
    printf("8. Thoat\n");
    printf("------------------------------------------\n");
}

