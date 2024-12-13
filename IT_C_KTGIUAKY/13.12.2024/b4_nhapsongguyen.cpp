#include <stdio.h>

int main() {
    int n;

    // Nhập số nguyên dương
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    // Tìm và hiển thị các ước bằng vòng lặp for
    printf("Cac uoc cua %d la:\n", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {  // Kiểm tra nếu i là ước của n
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
