#include <stdio.h>

int main() {
    int n;        // Biến lưu số nguyên dương được nhập
    int sum = 0;  // Biến lưu tổng

    // Yêu cầu nhập một số nguyên dương
    do {
        printf("Nhap mot so nguyen duong: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Vui long nhap so nguyen duong den 0.\n");
        }
    } while (n <= 0);

    // Tính tổng các số từ 1 đến n bằng vòng lặp
    for (int i = 1; i <= n; i++) {
        sum += i;  // Cộng giá trị i vào tổng
    }

    // In kết quả
    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);

    return 0;
}
