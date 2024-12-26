#include <stdio.h>

int main() {
    int n, i, j, temp;
    
    // Bước 1: Nhập số phần tử của mảng và giá trị các phần tử
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Bước 2: Sử dụng thuật toán nổi bọt sắp xếp mảng tăng dần
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // Bước 3: In mảng sau khi đã sắp xếp
    printf("Mang sau khi sap xep tang dan:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}