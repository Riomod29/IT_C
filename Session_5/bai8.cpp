#include <stdio.h>

// Hàm tính ước chung lớn nhất (UCLN) bằng thuật toán Euclid
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Hàm tính bội chung nhỏ nhất (BCNN)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b); // Công thức: BCNN(a, b) = (a * b) / UCLN(a, b)
}

int main() {
    int num1, num2;

    // Nhập hai số nguyên dương từ người dùng
    printf("Nhập số nguyên dương thứ nhất: ");
    scanf("%d", &num1);
    printf("Nhập số nguyên dương thứ hai: ");
    scanf("%d", &num2);

    // Kiểm tra nếu người dùng nhập số không hợp lệ
    if (num1 <= 0 || num2 <= 0) {
        printf("Vui lòng nhập hai số nguyên dương.\n");
        return 0;
    }

    // Tìm và in bội chung nhỏ nhất
    int result = lcm(num1, num2);
    printf("Bội chung nhỏ nhất của %d và %d là: %d\n", num1, num2, result);

    return 0;
}
