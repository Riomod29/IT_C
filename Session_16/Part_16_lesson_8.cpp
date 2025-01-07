#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Hàm đảo ngược chuỗi sử dụng con trỏ
void reverseString(char *str, char *reversed) {
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;

    while (end >= start) {
        *reversed = *end;
        reversed++;
        end--;
    }
    *reversed = '\0'; // Kết thúc chuỗi đảo ngược
}

int main() {
	system("color a");
    char inputString[100];
    char reveString[100];

    // Yêu cầu người dùng nhập vào một chuỗi
    printf("Nhap vao mot chuoi: ");
    gets(inputString);

    // Đảo ngược chuỗi đã nhập
    reverseString(inputString, reveString);

    // In chuỗi gốc và chuỗi đã đảo ngược ra màn hình
    printf("Chuoi goc: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reveString);

    return 0;
}