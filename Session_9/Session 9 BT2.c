#include <stdio.h>

int main() 
{
    int arr[5] = {1, 2, 3, 4, 5}, n =5;
    int viTri, giaTriMoi;
    printf("Mang ban dau chua chinh sua:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    do{
    printf("Nhap vi tri can sua (0 - %d): ", n - 1);
    scanf("%d", &viTri);
        if (viTri < 0 || viTri >= n){
        printf("Vi tri khong hop le! Vui long nhap lai.\n");
        }
    } while(viTri < 0 || viTri >= n);

    printf("Nhap gia tri moi: ");
    scanf("%d", &giaTriMoi);
        arr[viTri] = giaTriMoi;
    
    printf("\nMang sau khi sua:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

