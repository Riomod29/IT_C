#include <stdio.h>

int main() {
    // Khai báo và khởi tạo ma trận vuông
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 3; // Kích thước ma trận (số hàng và cột)

    int sum = 0; // Biến lưu tổng các phần tử trên đường chéo phụ

    // In các phần tử trên đường chéo phụ
    printf("Cac phan tu tren duong cheo phu la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - i - 1]); // matrix[i][n-i-1] là phần tử trên đường chéo phụ
        sum += matrix[i][n - i - 1];        // Cộng giá trị vào tổng
    }
    printf("\n");

    // In tổng các phần tử trên đường chéo phụ
    printf("Tong cac phan tu tren duong cheo phu la: %d\n", sum);

    return 0;
}
