#include <stdio.h>

int main() {
    int nam;

    // Nhập năm từ người dùng
    printf("Nhap nam can kiem tra: ");
    scanf("%d", &nam);

    // Kiểm tra năm nhuận
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        printf("%d la nam nhuan.\n", nam);
    } else {
        printf("%d khong phai la nam nhuan.\n", nam);
    }

    return 0;
}
