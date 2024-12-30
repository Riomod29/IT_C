#include <stdio.h>

#define MAX 100
void taoMaTran(int maTran[MAX][MAX], int soHang, int soCot) {
    // Input values for the matrix
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("Nhap gia tri cho maTran[%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }
}

void inMaTran(int maTran[MAX][MAX], int soHang, int soCot) {
    printf("Ma tran:\n");
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int soHang, soCot;
    int maTran[MAX][MAX];

    printf("Nhap so hang: ");
    scanf("%d", &soHang);
    printf("Nhap so cot: ");
    scanf("%d", &soCot);

    taoMaTran(maTran, soHang, soCot);
    inMaTran(maTran, soHang, soCot);

    return 0;
}