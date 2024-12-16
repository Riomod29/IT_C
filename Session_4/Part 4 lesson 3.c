#include <stdio.h>

int main() {
    int num; // Biến lưu số nguyên do người dùng nhập

    // Nhập số nguyên từ người dùng
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    // Kiểm tra số chia hết cho 3, 5 hoặc cả 3 và 5
    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d chia het cho ca 3 va 5.\n", num);
    } else if (num % 3 == 0) {
        printf("%d chia het cho 3.\n", num);
    } else if (num % 5 == 0) {
        printf("%d chia het cho 5.\n", num);
    } else {
        printf("%d khong chia het cho 3 va 5.\n", num);
    }

    return 0;
}
