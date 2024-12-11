#include <stdio.h>
int main(){
    int n, reversed;
    
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &n);
    
    // n / 1000 : lấy chữ số hàng nghìn.
    // (n / 100) % 10 : lấy chữ số hàng trăm.
    // (n / 10) % 10 : lấy chữ số hàng chục.
    //. n % 10 : lấy chữ số hàng đơn vị.
    
    int thousand = n / 1000, hundred = (n / 100) % 10, ten = (n / 10) % 10, unit = n % 10;
    
    reversed = unit * 1000 + ten * 100 + hundred * 10 + thousand;
    
    printf("So da bi dao nguoc: %d", reversed);

    return 0;
}

