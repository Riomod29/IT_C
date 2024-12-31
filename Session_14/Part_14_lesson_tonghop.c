#include <stdio.h>
#include <string.h>

void nhapChuoi(char chuoi[], int kichThuoc) {
    printf("Nhap chuoi: ");
    fgets(chuoi, kichThuoc, stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0'; // Remove newline character
}

int demKyTu(const char chuoi[]) {
    return strlen(chuoi);
}

int demSoLanXuatHien(const char chuoi[], char kyTu) {
    int dem = 0;
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] == kyTu) {
            dem++;
        }
    }
    return dem;
}

void daoNguocChuoi(char chuoi[]) {
    int doDai = strlen(chuoi);
    for (int i = 0; i < doDai / 2; i++) {
        char tam = chuoi[i];
        chuoi[i] = chuoi[doDai - i - 1];
        chuoi[doDai - i - 1] = tam;
    }
}

void inChuoi(const char chuoi[]) {
    printf("Chuoi: %s\n", chuoi);
}

int main() {
    char chuoi[100];
    nhapChuoi(chuoi, 100);

    printf("So luong ky tu: %d\n", demKyTu(chuoi));

    char kyTu;
    printf("Nhap ky tu de dem: ");
    scanf(" %c", &kyTu);
    printf("So lan xuat hien cua '%c': %d\n", kyTu, demSoLanXuatHien(chuoi, kyTu));

    daoNguocChuoi(chuoi);
    printf("Chuoi dao nguoc: ");
    inChuoi(chuoi);
    string

    return 0;
}
