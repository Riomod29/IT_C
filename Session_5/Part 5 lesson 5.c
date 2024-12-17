#include <stdio.h>

int main() {
    // Vòng lặp ngoài: duyệt qua các số từ 1 đến 9
    for (int i = 1; i <= 9; i++) {
        printf("Bang cuu chuong cua %d:\n", i);

        // Vòng lặp trong: duyệt qua các số từ 1 đến 10
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n"); // Dòng trống giữa các bảng cửu chương
    }

    return 0;
}
