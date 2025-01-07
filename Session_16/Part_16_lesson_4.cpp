#include <stdio.h>
#include <stdlib.h>
// Ham in tat ca phan tu trong mang su dung con tro
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
	system("color 2");
    // Khai bao va gan gia tri cho mang
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    // Goi ham de in ra tat ca phan tu trong mang
    printArray(array, size);

    return 0;
}