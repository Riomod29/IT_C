#include <stdio.h>

int main() {
    int choice;   // Lựa chọn của người dùng
    float num1, num2, result; // Các biến số và kết quả

    do {
        // Hiển thị menu
        printf("\n--- CALCULATOR ---\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        // Nếu chọn thoát, dừng chương trình
        if (choice == 5) {
            printf("Thoat chuong trinh.\n");
            break;
        }

        // Nhập hai số
        printf("Nhap so thu nhat: ");
        scanf("%f", &num1);
        printf("Nhap so thu hai: ");
        scanf("%f", &num2);

        // Xử lý lựa chọn
        switch (choice) {
            case 1: // Tổng
                result = num1 + num2;
                printf("Ket qua: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;

            case 2: // Hiệu
                result = num1 - num2;
                printf("Ket qua: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;

            case 3: // Tích
                result = num1 * num2;
                printf("Ket qua: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;

            case 4: // Thương
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Ket qua: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Loi: Khong the chia cho 0.\n");
                }
                break;

            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }

    } while (choice != 5);

    return 0;
}
