#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Định nghĩa cấu trúc sinh viên
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

// Hàm tìm kiếm sinh viên theo id
int findStudentById(struct Student students[], int length, int id) {
    for (int i = 0; i < length; i++) {
        if (students[i].id == id) {
            return i;
        }
    }
    return -1;
}

int main() {
	system ("color a");
    // Khai báo mảng sinh viên có độ dài là 50 và có sẵn 5 phần tử
    struct Student students[50] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Le Thi B", 21, "0987654321"},
        {3, "Tran Van C", 22, "0112233445"},
        {4, "Pham Thi D", 23, "0223344556"},
        {5, "Hoang Van E", 24, "0334455667"}
    };
    int length = 5; // Số lượng sinh viên hiện có trong mảng

    int id;
    printf("Nhap id sinh vien can sua: ");
    scanf("%d", &id);

    // Tìm kiếm sinh viên theo id
    int index = findStudentById(students, length, id);
    if (index == -1) {
        printf("Khong tim thay sinh vien co id = %d\n", id);
    } else {
        // Cho phép người dùng chỉnh sửa tên và tuổi của sinh viên
        printf("Nhap ten moi (nhap khong dau va khoang trang): ");
        scanf("%s", students[index].name);
        printf("Nhap tuoi moi: ");
        scanf("%d", &students[index].age);
    }

    // In ra thông tin toàn bộ sinh viên sau khi chỉnh sửa
    printf("\nThong tin sinh vien sau khi chinh sua:\n");
    for (int i = 0; i < length; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, So dien thoai: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }

    return 0;
}