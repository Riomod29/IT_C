#include <stdio.h>

// Hàm kiểm tra năm nhuận
int namNhuan(int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

int main() {
    int ngay, thang, nam;
    int ngayTrongThang;

    // Nhập ngày, tháng, năm từ người dùng
    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    // Kiểm tra tính hợp lệ của năm
    if (nam < 1) {
        printf("Nam khong hop le.\n");
        return 0;
    }

    // Kiểm tra tháng hợp lệ (1-12)
    if (thang < 1 || thang > 12) {
        printf("Thang khong hop le.\n");
        return 0;
    }

    // Xác định số ngày trong tháng
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            ngayTrongThang = 31; break;
        case 4: case 6: case 9: case 11:
            ngayTrongThang = 30; break;
        case 2:
            if (namNhuan(nam)) {
                ngayTrongThang = 29; // Tháng 2 năm nhuận có 29 ngày
            } else {
                ngayTrongThang = 28; // Tháng 2 không nhuận có 28 ngày
            }
            break;
    }

    // Kiểm tra ngày hợp lệ
    if (ngay >= 1 && ngay <= ngayTrongThang) {
        printf("Ngay thang nam hop le.\n");
    } else {
        printf("Ngay thang nam khong hop le.\n");
    }

    return 0;
}
