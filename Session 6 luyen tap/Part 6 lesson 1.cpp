#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    // Yêu cầu người dùng nhập 5 số nguyên
    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Tính tổng các số lẻ
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) { // Kiểm tra nếu là số lẻ
            sum += numbers[i];
        }
    }

    // In kết quả ra màn hình
    printf("Tong cac so le la: %d\n", sum);

    return 0;
}
