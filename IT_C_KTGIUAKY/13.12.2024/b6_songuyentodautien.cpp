#include <stdio.h>

int main() {
    int n; // Số lượng số nguyên tố cần tìm
    printf("Nhap so luong so nguyen to can tim: ");
    scanf("%d", &n);

    int count = 0; // Đếm số nguyên tố đã tìm được
    int num = 2;   // Bắt đầu kiểm tra từ số 2

    printf("Cac so nguyen to dau tien la:\n");
    while (count < n) {
        int is_prime = 1; // Giả sử num là số nguyên tố

        // Kiểm tra num có phải là số nguyên tố
        int i = 2;
        while (i * i <= num) { // Chỉ kiểm tra đến căn bậc 2 của num
            if (num % i == 0) {
                is_prime = 0; // num không phải số nguyên tố
                break;
            }
            i++;
        }

        // Nếu là số nguyên tố, in ra và tăng đếm
        if (is_prime) {
            printf("%d ", num);
            count++;
        }

        num++; // Kiểm tra số tiếp theo
    }

    printf("\n");
    return 0;
}
		