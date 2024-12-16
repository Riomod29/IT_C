#include <stdio.h>

int main() {
    int a, b, c, temp;

    // Nhập 3 số nguyên từ người dùng
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);

    // Sắp xếp các số theo thứ tự từ nhỏ đến lớn
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // In kết quả sau khi sắp xếp
    printf("Cac so theo thu tu tang dan: %d, %d, %d\n", a, b, c);

    return 0;
}
