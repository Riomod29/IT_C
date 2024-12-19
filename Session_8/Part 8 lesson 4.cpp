#include <stdio.h>

int main() {
    // Khai báo và khởi tạo mảng 2 chiều
    int arr[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 15, 25},
        {5, 35, 45, 55}
    };
    int rows = 3; // Số hàng
    int cols = 4; // Số cột

    // Khởi tạo giá trị lớn nhất là phần tử đầu tiên của mảng
    int max = arr[0][0];

    // Duyệt qua từng phần tử của mảng
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    // In ra phần tử lớn nhất
    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}
