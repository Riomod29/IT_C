#include <stdio.h>

int main() {
    int a, b, c; // Biến lưu 3 số nguyên nhập từ người dùng

    // Nhập 3 số nguyên từ người dùng
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    printf("Nhap so thu ba: ");
    scanf("%d", &c);

    // Kiểm tra xem số thứ 3 có nằm trong khoảng giữa số thứ 1 và số thứ 2
    if ((a <= c && c <= b) || (b <= c && c <= a)) {
        printf("So thu 3 nam trong khoang.\n");
    } else {
        printf("So thu 3 khong nam trong khoang.\n");
    }

    return 0;
}
