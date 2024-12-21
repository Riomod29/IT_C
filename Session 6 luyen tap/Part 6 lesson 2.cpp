#include <stdio.h>

int main() {
    int numbers[5];
    int odd_count = 0, even_count = 0;

    // Yêu cầu người dùng nhập 5 số nguyên
    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Đếm số lượng số chẵn và số lẻ
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) { // Kiểm tra nếu là số chẵn
            even_count++;
        } else { // Ngược lại là số lẻ
            odd_count++;
        }
    }

    // In kết quả ra màn hình
    printf("So luong so chang: %d\n", even_count);
    printf("So luong so le: %d\n", odd_count);

    return 0;
}

