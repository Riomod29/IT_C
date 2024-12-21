#include <stdio.h>

// Hàm in ra n số đầu tiên trong dãy Fibonacci
void printFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("%d so dau tien trong day Fibonacci la: \n", n);

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", first);
        } else if (i == 1) {
            printf("%d ", second);
        } else {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }

    printf("\n");
}

int main() {
    int n;

    // Yêu cầu người dùng nhập số nguyên n
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    // Kiểm tra nếu n hợp lệ (n >= 1)
    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong lon hon 0.\n");
    } else {
        // Gọi hàm in dãy Fibonacci
        printFibonacci(n);
    }

    return 0;
}
