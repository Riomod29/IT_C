#include <stdio.h>
#include <stdlib.h>
// Hàm xóa phần tử tại vị trí index trong mảng
void xoaPhanTu(int *arr, int *n, int index) {
    if (index < 0 || index >= *n) {
        printf("Vi tri xoa khong hop le!\n");
        return;
    }
    for (int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

// Hàm in mảng
void inMang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
	system("color a");
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau: ");
    inMang(arr, n);

    int index = 2; // Vị trí cần xóa
    xoaPhanTu(arr, &n, index);

    printf("Mang sau khi xoa phan tu tai vi tri %d: ", index);
    inMang(arr, n);

    return 0;
}