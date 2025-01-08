#include <stdio.h>
#include <stdlib.h>
#define MAX_STUDENTS 50

// Khởi tạo cấu trúc sinh viên
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
	system("color a");
    struct Student students[MAX_STUDENTS];
    int i;

    // Nhập thông tin của 5 sinh viên
    for (i = 0; i < 5; i++) {
        students[i].id = i + 1; // Tự động tăng id bắt đầu từ 1
        printf("Nhap thong tin sinh vien thu %d (khong ghi dau va khoang trang):\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Phone Number: ");
        scanf("%s", students[i].phoneNumber);
    }

    // In thông tin các sinh viên trong mảng
    printf("\nThong tin cac sinh vien:\n");
    for (i = 0; i < 5; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}