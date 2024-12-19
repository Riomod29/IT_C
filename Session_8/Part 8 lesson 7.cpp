#include <stdio.h>

int main() {
    // Khai báo và khởi tạo ma trận vuông
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 3; // Kích thước ma trận (số hàng và cột)

    int sum = 0; // Biến lưu tổng các phần tử trên đường chéo chính

    // In các phần tử trên đường chéo chính
    printf("Cac phan tu tren duong cheo chinh la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]); // matrix[i][i] là phần tử trên đường chéo chính
        sum += matrix[i][i];        // Cộng giá trị vào tổng
    }
    printf("\n");

    // In tổng các phần tử trên đường chéo chính
    printf("Tong cac phan tu tren duong cheo chinh la: %d\n", sum);

    return 0;
}
