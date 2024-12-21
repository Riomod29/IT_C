#include <stdio.h>

int main() {
    int number;

    // Yêu cầu người dùng nhập một số nguyên
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);

    // In ra tất cả các ước của số đã nhập
    printf("Cac uoc cua %d la:\n", number);
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
