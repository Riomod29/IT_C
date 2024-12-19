#include <stdio.h>

int main() {
    int n;

    // Yêu cầu người dùng nhập kích thước ma trận
    printf("Nhap so nguyen de tao ma tran vuong: ");
    scanf("%d", &n);

    // Kiểm tra nếu n <= 0
    if (n <= 0) {
        printf("Kich thuoc ma tran phai lon hon 0.\n");
        return 1; // Thoát chương trình
    }

    // Khai báo và khởi tạo mảng 2 chiều
    int matrix[n][n];
    int value = 1; // Giá trị ban đầu

    // Gán giá trị cho ma trận
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = value++;
        }
    }

    // In ma trận ra màn hình
    printf("Ma tran vuong co kich thuoc %d x %d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
