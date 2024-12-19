#include <stdio.h>

int main() {
    // Khai báo mảng với một số giá trị
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]); // Tính số lượng phần tử trong mảng

    // In các phần tử từ cuối về đầu
    printf("Cac phan tu trong mang tu cuoi ve dau: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
