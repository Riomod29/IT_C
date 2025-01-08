#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENTS 50

// Định nghĩa cấu trúc Xinh diên
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

// Hàm Add xinh diên vào mảng
void addStudent(Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Khong the them xinh dien. Mang da full.\n");
        return;
    }

    Student newStudent;
    printf("Nhap ID xinh dien: ");
    scanf("%d", &newStudent.id);
    printf("Nhap ten xinh dien: ");
    scanf(" %[^\n]", newStudent.name);
    printf("Nhap tuoi xinh dien: ");
    scanf("%d", &newStudent.age);
    printf("Nhap so zep lao xinh dien: ");
    scanf(" %[^\n]", newStudent.phoneNumber);

    students[*count] = newStudent;
    (*count)++;
}

// Hàm hiển thị Infor xinh diên
void displayStudents(Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Xinh dien %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Dep lao: %s\n", students[i].phoneNumber);
    }
}

int main() {
	system ("color a");
    // Khởi tạo mảng sinh viên với 5 phần tử
    Student students[MAX_STUDENTS] = {
        {1, "Alice", 20, "1234567890"},
        {2, "Bob", 21, "0987654321"},
        {3, "Charlie", 22, "1122334455"},
        {4, "David", 23, "2233445566"},
        {5, "Eve", 24, "3344556677"}
    };
    int studentCount = 5;

    // Thêm xinh diên mới vào mảng
    addStudent(students, &studentCount);
    // Hiển thị thông tin ALL xinh diên
    displayStudents(students, studentCount);

    return 0;
}