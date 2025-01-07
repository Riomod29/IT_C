#include <stdio.h>
#include <stdlib.h>

// Hàm thêm phần tử vào mảng
void insertElement(int **arr, int *size, int value, int position) {
    if (position < 0 || position > *size) {
        printf("Vi tri khong hop le\n");
        return;
    }

    // Tăng kích thước mảng
    *arr = (int *)realloc(*arr, (*size + 1) * sizeof(int));
    if (*arr == NULL) {
        printf("Khong the cap phat bo nho\n");
        return;
    }

    // Dịch chuyển các phần tử để chèn phần tử mới
    for (int i = *size; i > position; i--) {
        (*arr)[i] = (*arr)[i - 1];
    }

    // Chèn phần tử mới vào vị trí
    (*arr)[position] = value;
    (*size)++;
}

int main() {
	system("color a");
    int size = 5;
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho\n");
        return 1;
    }

    // Khởi tạo mảng
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    // In mảng ban đầu
    printf("Mang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Thêm phần tử mới vào mảng
    int value = 10;
    int position = 2;
    insertElement(&arr, &size, value, position);

    // In mảng sau khi thêm phần tử
    printf("Mang sau khi them phan tu: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Giải phóng bộ nhớ
    free(arr);

    return 0;
}