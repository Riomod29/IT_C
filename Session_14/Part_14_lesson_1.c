#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Chuoi vua nhap: %s\n", str);
    printf("Do dai cua chuoi: %lu\n", strlen(str));

    return 0;
}