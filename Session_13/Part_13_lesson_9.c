#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void nhapMang(int **arr, int n, int m) {
    printf("Nhap gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void inMang(int **arr, int n, int m) {
    printf("Gia tri cac phan tu cua mang theo ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void inGoc(int **arr, int n, int m) {
    printf("Cac phan tu o goc theo ma tran:\n");
    printf("%d %d\n", arr[0][0], arr[0][m-1]);
    printf("%d %d\n", arr[n-1][0], arr[n-1][m-1]);
}

void inDuongBien(int **arr, int n, int m) {
    printf("Cac phan tu nam tren duong bien theo ma tran:\n");
    for (int i = 0; i < m; i++) printf("%d ", arr[0][i]);
    for (int i = 1; i < n-1; i++) printf("%d %d ", arr[i][0], arr[i][m-1]);
    for (int i = 0; i < m; i++) printf("%d ", arr[n-1][i]);
    printf("\n");
}

void inDuongCheo(int **arr, int n, int m) {
    printf("Cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == m - 1) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

bool laSoNguyenTo(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void inSoNguyenTo(int **arr, int n, int m) {
    printf("Cac phan tu la so nguyen to theo ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (laSoNguyenTo(arr[i][j])) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n, m, choice;
    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    int **arr = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        arr[i] = (int *)malloc(m * sizeof(int));
    }

    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Exit\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, n, m);
                break;
            case 2:
                inMang(arr, n, m);
                break;
            case 3:
                inGoc(arr, n, m);
                break;
            case 4:
                inDuongBien(arr, n, m);
                break;
            case 5:
                inDuongCheo(arr, n, m);
                break;
            case 6:
                inSoNguyenTo(arr, n, m);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 7);

    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}