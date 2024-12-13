#include <stdio.h>

int main() {
    int n, is_prime = 1; // is_prime để đánh dấu số nguyên tố

    // Nhập số nguyên dương
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    // Kiểm tra số nguyên tố
    if (n <= 1) {
        is_prime = 0; // Các số <= 1 không phải số nguyên tố
    } else {
        for (int i = 2; i < n; i++) { // Duyệt từ 2 đến n-1
            if (n % i == 0) { // Nếu tìm thấy ước, không phải số nguyên tố
                is_prime = 0;
                break; // Dừng vòng lặp sớm
            }
        }
    }

    // Hiển thị kết quả
    if (is_prime) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai la so nguyen to.\n", n);
    }

    return 0;
}
