#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, totalAmount, interest;
    int months;

    // Nhập số tiền gửi ban đầu, lãi suất và số tháng
    printf("Nhap so tien gui ban dau: ");
    scanf("%lf", &principal);
    printf("Nhap lai suat hang thang (%%): ");
    scanf("%lf", &rate);
    printf("Nhap so thang gui: ");
    scanf("%d", &months);

    // Chuyển lãi suất về dạng thập phân
    rate /= 100;

    // Tính số tiền lãi và tổng số tiền sau thời gian gửi (lãi nhập gốc)
    totalAmount = principal * pow(1 + rate, months);
    interest = totalAmount - principal;

    // In kết quả
    printf("Tien lai: %.3lf\n", interest);
    printf("Tong so tien nhan duoc: %.3lf\n", totalAmount);

    return 0;
}
