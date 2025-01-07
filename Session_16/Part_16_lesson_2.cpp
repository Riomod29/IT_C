#include <stdio.h>
#include <stdlib.h>

// Hàm hoán đổi giá trị của hai biến sử dụng con trỏ
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
	system("color a");
    // Khai báo và gán giá trị cho hai biến
    int x = 5;
    int y = 10;

    // In giá trị của hai biến trước khi hoán đổi
    printf("Truoc khi hoan doi: x = %d, y = %d\n", x, y);

    // Gọi hàm hoán đổi giá trị của hai biến
    swap(&x, &y);

    // In giá trị của hai biến sau khi hoán đổi
    printf("Sau khi hoan doi: x = %d, y = %d\n", x, y);

    return 0;
}