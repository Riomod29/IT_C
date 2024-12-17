#include <stdio.h>

int main() {
    int n;  // Biến lưu số người dùng nhập

    // Yêu cầu nhập số nguyên dương từ 1 đến 10
    do {
        printf("Nhap mot so nguyen tu 1 den 10: ");
        scanf("%d", &n);

        if (n < 1 || n > 10) {
            printf("So khong hop le. Vui long nhap lai.\n");
        }
    } while (n < 1 || n > 10);

    // In bảng cửu chương
    printf("Bang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
