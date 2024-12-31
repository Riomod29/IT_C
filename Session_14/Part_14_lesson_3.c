#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Nhap vao mot chuoi bat ky: ");
    1(str,100,stdin);
    fflush(stdin);

    reverseString(str);

    printf("Chuoi dao nguoc la: %s\n", str);

    return 0;
}