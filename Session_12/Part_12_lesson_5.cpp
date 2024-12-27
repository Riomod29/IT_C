#include <iostream>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num1, num2;

    // Yêu cầu người dùng nhập vào 2 số nguyên
    cout << "Nhap vao so nguyen thu nhat: ";
    cin >> num1;
    cout << "Nhap vao so nguyen thu hai: ";
    cin >> num2;

    // Kiểm tra và in ra kết quả cho số thứ nhất
    if (isPrime(num1)) {
        cout << num1 << " la so nguyen to." << endl;
    } else {
        cout << num1 << " khong phai la so nguyen to." << endl;
    }

    // Kiểm tra và in ra kết quả cho số thứ hai
    if (isPrime(num2)) {
        cout << num2 << " la so nguyen to." << endl;
    } else {
        cout << num2 << " khong phai la so nguyen to." << endl;
    }

    return 0;
}