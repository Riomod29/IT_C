#include <stdio.h>
#include <math.h>

int main() {
    // In ra các số Armstrong có 3 chữ số
    printf("Cac so Armstrong co 3 chu so la:\n");
    for (int num = 100; num <= 999; num++) {
        int hundreds = num / 100;           // Chữ số hàng trăm
        int tens = (num / 10) % 10;         // Chữ số hàng chục
        int units = num % 10;              // Chữ số hàng đơn vị

        // Kiểm tra nếu tổng lập phương của các chữ số bằng chính số đó
        if (pow(hundreds, 3) + pow(tens, 3) + pow(units, 3) == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
