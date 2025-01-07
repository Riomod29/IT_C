#include <stdio.h>
#include <stdlib.h>
// Hàm cập nhật phần tử trong mảng
void updateElement(int *arr, int newValue, int position) {
    arr[position] = newValue;
}

int main() {
	system("color 1");
    // Khai báo và gán giá trị cho mảng
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // In mảng trước khi cập nhật
    printf("Mang truoc khi update: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Cập nhật phần tử tại vị trí 2 với giá trị mới là 10
    updateElement(arr, 10, 2);

    // In mảng sau khi cập nhật
    printf("Mang sau khi update: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}