#include <stdio.h>

int main() {
    // Khai báo và khởi tạo mảng
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Kích thước mảng
    int target, found = 0;

    // Yêu cầu người dùng nhập phần tử cần tìm
    printf("Nhap phan tu can tim: ");
    scanf("%d", &target);

    // Duyệt mảng để kiểm tra phần tử
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            found = 1; // Đánh dấu tìm thấy phần tử
            break; // Dừng vòng lặp sau khi tìm thấy
        }
    }

    // Nếu không tìm thấy phần tử
    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}
