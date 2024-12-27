#include <iostream>

// Hàm tính tổng hai số nguyên
int tong(int a, int b) {
    return a + b;
}

int main() {
    int so1, so2;

    std::cout << "Nhap so dau tien: ";
    std::cin >> so1;

    std::cout << "Nhap so thu hai: ";
    std::cin >> so2;

    int ketQua = tong(so1, so2);

    std::cout << "Tong cua " << so1 << " va " << so2 << " la " << ketQua << std::endl;

    return 0;
}