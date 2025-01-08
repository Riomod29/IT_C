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
    struct SinhVien sv;

    // Yêu cầu người dùng nhập vào từng thuộc tính của biến
    printf("Nhap ten sinh vien: ");
    fgets(sv.name, sizeof(sv.name), stdin);

    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &sv.age);

    printf("Nhap so dien thoai sinh vien: ");
    scanf("%s", sv.phoneNumber);

    // In biến ra màn hình sau khi nhập xong
    printf("\nThong tin sinh vien:\n");
    printf("Ten: %s", sv.name);
    printf("Tuoi: %d\n", sv.age);
    printf("So dien thoai: %s\n", sv.phoneNumber);

    return 0;
}