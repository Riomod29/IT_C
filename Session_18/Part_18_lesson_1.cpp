#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Định nghĩa cấu trúc SinhVien
struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
	system("color a");
    // Khai báo biến từ cấu trúc SinhVien
    struct SinhVien sv;

    // Gán giá trị cho các thuộc tính của biến sv
    strcpy(sv.name, "Nguyen Cong Tru");
    sv.age = 20;
    strcpy(sv.phoneNumber, "0366242457");

    // In các thuộc tính của biến sv ra màn hình
    printf("Ten: %s\n", sv.name);
    printf("Tuoi: %d\n", sv.age);
    printf("So dien thoai: %s\n", sv.phoneNumber);

    return 0;
}