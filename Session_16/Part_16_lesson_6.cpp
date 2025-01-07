#include <stdio.h>
#include <stdlib.h>

// Hàm tìm kiếm phần tử trong mảng
int timKiem(int *arr, int size, int giaTri) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == giaTri) {
            return i; // Trả về vị trí của phần tử tìm thấy
        }
    }
    return -1; // Trả về -1 nếu không tìm thấy
}

int main() {
	system("color 2");
    int arr[] = {1, 2, 4, 5, 6, 7}; // Khai báo và gán giá trị cho mảng
    int size = sizeof(arr) / sizeof(arr[0]); // Tính kích thước của mảng
    int giaTri = 7; // Giá trị cần tìm kiếm

    // Gọi hàm tìm kiếm và in kết quả ra màn hình
    int viTri = timKiem(arr, size, giaTri);
    if (viTri != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", giaTri, viTri);
    } else {
        printf("Khong tim thay phan tu %d trong mang.\n", giaTri);
    }

    return 0;
}