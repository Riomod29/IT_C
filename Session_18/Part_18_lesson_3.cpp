#include <stdio.h>
#include <stdlib.h>

// Định nghĩa cấu trúc sinh viên
struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
	system("color a");
    // Khai báo mảng sinh viên có 5 phần tử
    struct SinhVien sinhVienArray[5];

    // Yêu cầu người dùng nhập thông tin của từng sinh viên
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien thu %d (ghi khong dau va khoang trang):\n", i + 1);
        printf("Nhap ten: ");
        scanf("%s", sinhVienArray[i].name);
        printf("Nhap tuoi: ");
        scanf("%d", &sinhVienArray[i].age);
        printf("Nhap so dien thoai: ");
        scanf("%s", sinhVienArray[i].phoneNumber);
    }

    // In thông tin các sinh viên trong mảng
    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ten: %s\n", sinhVienArray[i].name);
        printf("Tuoi: %d\n", sinhVienArray[i].age);
        printf("So dien thoai: %s\n", sinhVienArray[i].phoneNumber);
    }

    return 0;
}