#include <stdio.h>
#include <math.h>

int main() {
    int number;
    int isPrime = 1; // Giả định ban đầu: số là nguyên tố

    // Yêu cầu người dùng nhập một số nguyên
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = 0; // Số nhỏ hơn hoặc bằng 1 không phải là số nguyên tố
    } else {
        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                isPrime = 0; // Nếu tìm được ước khác 1 và chính nó, không phải số nguyên tố
                break;
            }
        }
    }

    // In kết quả
    if (isPrime) {
        printf("%d la so nguyen to.\n", number);
    } else {
        printf("%d khong phai la so nguyen to.\n", number);
    }

    return 0;
}