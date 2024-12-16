#include <stdio.h>

int main() {
    int month; // Biến lưu số tháng nhập từ người dùng
    int year;  // Biến lưu năm nhập từ người dùng, dùng để kiểm tra năm nhuận

    // Nhập số tháng từ người dùng
    printf("Nhap so thang (1-12): ");
    scanf("%d", &month);

    // Kiểm tra nếu tháng hợp lệ
    if (month < 1 || month > 12) {
        printf("So thang khong hop le.\n");
    } else {
        // Nếu tháng là tháng 2, yêu cầu nhập năm để kiểm tra năm nhuận
        if (month == 2) {
            printf("Nhap nam: ");
            scanf("%d", &year);
            // Kiểm tra năm nhuận
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("Thang 2 co 29 ngay.\n");
            } else {
                printf("Thang 2 co 28 ngay.\n");
            }
        }
        // Các tháng còn lại
        else if (month == 4 || month == 6 || month == 9 || month == 11) {
            printf("Thang %d co 30 ngay.\n", month);
        } else {
            printf("Thang %d co 31 ngay.\n", month);
        }
    }

    return 0;
}
