#include <stdio.h>
#include <string.h>

int main() {
    const char correct_password[] = "123456"; // Mật khẩu cho trước
    char input_password[50];

    // Yêu cầu người dùng nhập mật khẩu
    printf("Nhap mat khau: ");
    scanf("%s", input_password);

    // Kiểm tra mật khẩu
    if (strcmp(input_password, correct_password) == 0) {
        printf("Mat khau dung!\n");
    } else {
        printf("Mat khau sai!\n");
    }

    return 0;
}
