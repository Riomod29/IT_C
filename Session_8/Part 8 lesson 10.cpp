#include <stdio.h>
#include <stdbool.h>

int main() {
    // Khai báo và khởi tạo mảng
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]); // Số lượng phần tử trong mảng

    int counts[n]; // Mảng lưu số lần xuất hiện của mỗi phần tử
    int maxCount = 0; // Số lần xuất hiện lớn nhất

    // Khởi tạo mảng đếm với giá trị 0
    for (int i = 0; i < n; i++) {
        counts[i] = 0;
    }

    // Đếm số lần xuất hiện của từng phần tử
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                counts[i]++;
            }
        }
        // Cập nhật số lần xuất hiện lớn nhất
        if (counts[i] > maxCount) {
            maxCount = counts[i];
        }
    }

    // In các phần tử có số lần xuất hiện bằng maxCount
    printf("Cac phan tu xuat hien nhieu nhat la: ");
    for (int i = 0; i < n; i++) {
        // Kiểm tra nếu phần tử chưa được in ra
        bool alreadyPrinted = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                alreadyPrinted = true;
                break;
            }
        }
        if (!alreadyPrinted && counts[i] == maxCount) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
