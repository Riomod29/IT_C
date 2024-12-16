#include <stdio.h>

int main() {
    int num; // Biến lưu số nguyên do người dùng nhập

    // Nhập số nguyên từ người dùng
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    // Kiểm tra số âm hay dương
    if (num >= 0) {
        printf("%d la so duong.\n", num);
    } else {
        printf("%d la so am.\n", num);
    }

    return 0;
}
