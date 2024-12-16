#include <stdio.h>

int main() {
    int num; // Biến lưu số nguyên do người dùng nhập

    // Nhập số nguyên từ người dùng
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    // Kiểm tra số chẵn hay lẻ
    if (num % 2 == 0) {
        printf("%d la so chan.\n", num);
    } else {
        printf("%d la so le.\n", num);
    }

    return 0;
}
