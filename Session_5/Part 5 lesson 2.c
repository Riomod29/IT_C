#include <stdio.h>

int main() {
    int target_number = 42;  // Số cố định cho trước
    int user_input;          // Biến lưu số nhập từ người dùng

    printf("Chuong trinh yeu cau nhap dung so de ket thuc.\n");

    // Vòng lặp yêu cầu nhập số
    do {
        printf("Nhap: ");
        scanf("%d", &user_input);

        if (user_input != target_number) {
            printf("Sai! Hay thu lai.\n");
        }
    } while (user_input != target_number);

    // Kết thúc khi nhập đúng số
    printf("Chung mung! Bạn da  jj............................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................. %d.\n", target_number);

    return 0;
}
