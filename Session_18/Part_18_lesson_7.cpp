#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENTS 50

// Định nghĩa cấu trúc xinh dien
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

// Khai báo mảng xinh dien
Student students[MAX_STUDENTS] = {
    {1, "Nguyen Van A", 20, "0123456789"},
    {2, "Tran Thi B", 21, "0987654321"},
    {3, "Le Van C", 22, "0112233445"},
    {4, "Pham Thi D", 23, "0223344556"},
    {5, "Hoang Van E", 24, "0334455667"}
};
int studentCount = 5;

// Hàm delete xinh dien folow name
void deleteStudentByName(char *name) {
    int found = 0;
    for (int i = 0; i < studentCount; i++) {
        if (strcmp(students[i].name, name) == 0) {
            found = 1;
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            break;
        }
    }
    if (!found) {
        printf("Xinh dien No ton tai.\n");
    } else {
        printf("Done delete xinh dien %s.\n", name);
    }
}

// Hàm Show infor xinh dien
void displayStudents() {
    for (int i = 0; i < studentCount; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone Number: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

int main() {
	system("color a");
    char nameToDelete[50];
    printf("Nhap name xinh dien can delete: ");
    gets(nameToDelete);

    deleteStudentByName(nameToDelete);
    printf("List xinh dien sau khi delete:\n");
    displayStudents();

    return 0;
}