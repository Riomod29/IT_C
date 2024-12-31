#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Xin chao cac ban den voi Rikkei Education";
    char kyTu;
    int dem = 0;

    printf("Nhap vao mot ky tu bat ky: ");
    scanf("%c", &kyTu);

    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == kyTu) {
            dem++;
        }
    }

    printf("So lan xuat hien cua ky tu '%c' trong chuoi la: %d\n", kyTu, dem);

    return 0;
}