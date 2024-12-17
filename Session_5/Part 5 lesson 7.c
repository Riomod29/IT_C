#include <stdio.h>

int main() {
    int a, b, ucln;

    // Nhập hai số nguyên dương
    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

    // Kiểm tra số nhỏ hơn
    int min = (a < b) ? a : b;

    // Duyệt giảm dần để tìm UCLN
    for (int i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            ucln = i;
            break; // Dừng khi tìm được UCLN
        }
    }

    // In kết quả
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln);

    return 0;
}
