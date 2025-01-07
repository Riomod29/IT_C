#include <stdio.h>
#include <stdlib.h>
// Hàm sắp xếp một mảng sử dụng con trỏ
// Tham số:
// - arr: con trỏ đến mảng cần sắp xếp
// - size: kích thước của mảng
void sortArray(int *arr, int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

// Hàm in một mảng
// Tham số:
// - arr: con trỏ đến mảng cần in
// - size: kích thước của mảng
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
	system ("color a");
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // In mảng ban đầu
    printf("Original array: ");
    printArray(arr, size);

    // Sắp xếp mảng
    sortArray(arr, size);

    // In mảng sau khi sắp xếp
    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}