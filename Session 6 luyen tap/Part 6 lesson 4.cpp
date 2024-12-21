#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, root1, root2;

    // Yêu cầu người dùng nhập hệ số a, b, c
    printf("Nhap he so a: ");
    scanf("%lf", &a);
    printf("Nhap hệ so b: ");
    scanf("%lf", &b);
    printf("Nhap he so c: ");
    scanf("%lf", &c);

    // Kiểm tra nếu a = 0
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            printf("Phuong trinh co mot nghiem: x = %.2lf\n", -c / b);
        }
    } else {
        // Tính delta
        delta = b * b - 4 * a * c;

        if (delta > 0) {
            root1 = (-b + sqrt(delta)) / (2 * a);
            root2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem phan biet:\n");
            printf("x1 = %.2lf\n", root1);
            printf("x2 = %.2lf\n", root2);
        } else if (delta == 0) {
            root1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2lf\n", root1);
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    }

    return 0;
}
