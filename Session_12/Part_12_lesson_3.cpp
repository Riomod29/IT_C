#include <iostream>

using namespace std;

// Hàm tính giai thừa của một số nguyên
int factorial(int n) {
    if (n < 0) {
        return -1; // Trả về -1 nếu n là số âm
    }
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    cout << "Nhap mot so nguyen: ";
    cin >> number;

    int result = factorial(number);
    if (result == -1) {
        cout << "Khong the tinh giai thua cua so am." << endl;
    } else {
        cout << "Giai thua cua " << number << " la: " << result << endl;
    }

    return 0;
}