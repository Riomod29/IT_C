#include <stdio.h>
#include <ctype.h>

int main() {
    char chuoi[100];
    int dem = 0;

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (isalpha(chuoi[i])) {
            dem++;
        }
    }

    printf("So ky tu la chu cai trong chuoi la: %d\n", dem);

    return 0;
}