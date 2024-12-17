#include <stdio.h>

int main() {
    int n, digit, temp, mucChia = 1;
    printf("Hay nhap vao 1 so nguyen bat ky: ");
    scanf("%d", &n);
    temp = n;
    
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    
    while (temp > 9) {
        temp = temp / 10;
        mucChia = mucChia * 10; 
    }

    while (mucChia > 0) {
        digit = n / mucChia;
        printf("%d ", digit);
        n = n % mucChia;
        mucChia = mucChia / 10;
    }
    
    return 0;
}
