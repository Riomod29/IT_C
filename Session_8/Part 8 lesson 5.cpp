#include <stdio.h>

int main() {
    // Khai báo và khởi tạo ma trận 2 chiều
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int rows = 4; // Số hàng
    int cols = 4; // Số cột

    int sum = 0; // Biến tổng

    // Tính tổng các phần tử trên hàng đầu tiên
    for (int j = 0; j < cols; j++) {
        sum += matrix[0][j];
    }

    // Tính tổng các phần tử trên hàng cuối cùng
    for (int j = 0; j < cols; j++) {
        sum += matrix[rows - 1][j];
    }

    // Tính tổng các phần tử trên cột đầu tiên (trừ hàng đầu và hàng cuối)
    for (int i = 1; i < rows - 1; i++) {
        sum += matrix[i][0];
    }

    // Tính tổng các phần tử trên cột cuối cùng (trừ hàng đầu và hàng cuối)
    for (int i = 1; i < rows - 1; i++) {
        sum += matrix[i][cols - 1];
    }

    // In kết quả
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    return 0;
}
