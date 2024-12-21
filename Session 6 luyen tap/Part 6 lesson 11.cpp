#include <stdio.h>
#include <math.h>

// Hàm kiểm tra số nguyên tố
int isPrime(int num) {
    if (num <= 1) return 0;  // Các số <= 1 không phải số nguyên tố
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;  // Nếu chia hết cho i, không phải số nguyên tố
        }
    }
    return 1;  // Nếu không chia hết cho số nào, là số nguyên tố
}

int main() {
    int n, count = 0, num = 2;

    // Nhập số nguyên n từ người dùng
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    // In ra n số nguyên tố đầu tiên
    printf("Cac so nguyen to dau tien la: \n");
    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}
