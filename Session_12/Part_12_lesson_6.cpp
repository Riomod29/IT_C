#include <iostream>
using namespace std;

// Hàm kiểm tra số hoàn hảo
bool kiemTraSoHoanHao(int n) {
    if (n <= 1) return false;
    int tong = 0;
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {
            tong += i;
        }
    }
    return tong == n;
}

int main() {
    int so1, so2;
    cout << "Nhap vao so nguyen thu nhat: ";
    cin >> so1;
    cout << "Nhap vao so nguyen thu hai: ";
    cin >> so2;

    if (kiemTraSoHoanHao(so1)) {
        cout << so1 << " la so hoan hao." << endl;
    } else {
        cout << so1 << " khong phai la so hoan hao." << endl;
    }

    if (kiemTraSoHoanHao(so2)) {
        cout << so2 << " la so hoan hao." << endl;
    } else {
        cout << so2 << " khong phai la so hoan hao." << endl;
    }

    return 0;
}