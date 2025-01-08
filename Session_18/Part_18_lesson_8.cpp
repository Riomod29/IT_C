#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENTS 50

// Định nghĩa cấu trúc sinh viên
typedef struct {
    int id;
    char ten[50];
    int tuoi;
    char soDienThoai[15];
} SinhVien;

// Hàm hiển thị thông tin sinh viên
void hienThiSinhVien(SinhVien sinhVien[], int soLuong) {
    for (int i = 0; i < soLuong; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, So Dien Thoai: %s\n", sinhVien[i].id, sinhVien[i].ten, sinhVien[i].tuoi, sinhVien[i].soDienThoai);
    }
}

int main() {
	system("color a");
    // Khai báo mảng sinh viên và khởi tạo 5 phần tử
    SinhVien sinhVien[MAX_STUDENTS] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Le Thi B", 21, "0987654321"},
        {3, "Tran Van C", 22, "0123987654"},
        {4, "Pham Thi D", 23, "0987123456"},
        {5, "Hoang Van E", 24, "0123456788"}
    };
    int soLuongSinhVien = 5;

    // Nhập thông tin sinh viên mới
    SinhVien sinhVienMoi;
    printf("Nhap ID sinh vien moi: ");
    scanf("%d", &sinhVienMoi.id);
    printf("Nhap ten sinh vien moi (khong co khoang trang): ");
    scanf("%s", sinhVienMoi.ten);
    printf("Nhap tuoi sinh vien moi: ");
    scanf("%d", &sinhVienMoi.tuoi);
    printf("Nhap so dien thoai sinh vien moi: ");
    scanf("%s", sinhVienMoi.soDienThoai);

    // Nhập vị trí cần chèn
    int viTri;
    printf("Nhap vi tri can chen sinh vien moi (0 to %d): ", soLuongSinhVien);
    scanf("%d", &viTri);

    // Kiểm tra vị trí hợp lệ
    if (viTri < 0 || viTri > soLuongSinhVien) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    // Dịch chuyển các phần tử để chèn sinh viên mới
    for (int i = soLuongSinhVien; i > viTri; i--) {
        sinhVien[i] = sinhVien[i - 1];
    }
    sinhVien[viTri] = sinhVienMoi;
    soLuongSinhVien++;

    // Hiển thị thông tin sinh viên sau khi chèn
    printf("Danh sach sinh vien sau khi chen:\n");
    hienThiSinhVien(sinhVien, soLuongSinhVien);

    return 0;
}