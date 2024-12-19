#include <stdio.h>

int main() {
    // Khai báo và khởi tạo mảng
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]); // Số lượng phần tử trong mảng

    int maxCount = 0;   // Số lần xuất hiện lớn nhất
    int mostFrequent;   // Phần tử xuất hiện nhiều nhất

    // Vòng lặp duyệt từng phần tử
    for (int i = 0; i < n; i++) {
        int count = 0; // Đếm số lần xuất hiện của arr[i]

        // Đếm số lần xuất hiện của arr[i]
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        // Kiểm tra và cập nhật phần tử xuất hiện nhiều nhất
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    // In kết quả
    printf("Phan tu xuat hien nhieu nhat la: %d\n", mostFrequent);

    return 0;
}
