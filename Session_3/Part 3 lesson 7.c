#include <stdio.h>
int main(){
    int n, sum;
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &n);
    
    // n / 1000 : lấy chữ số hàng nghìn.
    // (n / 100) % 10 : lấy chữ số hàng trăm.
    // (n / 10) % 10 : lấy chữ số hàng chục.
    // n % 10 : lấy chữ số hàng đơn vị.

    sum = (n / 1000) + ((n / 100) % 10) + ((n / 10) % 10) + (n % 10);
    
    printf("Tong cua 4 so = %d", sum);

    return 0;
}
