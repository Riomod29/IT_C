#include <stdio.h>
/*
Tìm GCD của 48 và 18:
a = 48, b = 18
Tính phần dư: r = 48 % 18 = 12
Gán a = 18, b = 12
Tính phần dư: r = 18 % 12 = 6
Gán a = 12, b = 6
Tính phần dư: r = 12 % 6 = 
Gán a = 6, b = 0
Khi b = 0, GCD(48, 18) = 6
*/

// Hàm tìm ước chung lớn nhất (GCD) sử dụng giải thuật Euclid
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &a, &b);
    printf("GCD cua %d va %d la: %d\n", a, b, gcd(a, b));
    return 0;
}
