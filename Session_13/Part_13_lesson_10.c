#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void nhapMang(int arr[], int *n);
void inMang(int arr[], int n);
void themPhanTu(int arr[], int *n, int viTri, int giaTri);
void suaPhanTu(int arr[], int n, int viTri, int giaTri);
void xoaPhanTu(int arr[], int *n, int viTri);
void sapXepGiamDan(int arr[], int n);
void sapXepTangDan(int arr[], int n);
int timKiemTuyenTinh(int arr[], int n, int giaTri);
int timKiemNhiPhan(int arr[], int n, int giaTri);

int main() {
    int arr[MAX];
    int n = 0;
    int choice, viTri, giaTri;
    char subChoice;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. Them mot phan tu vao vi tri chi dinh\n");
        printf("4. Sua mot phan tu o vi tri chi dinh\n");
        printf("5. Xoa mot phan tu o vi tri chi dinh\n");
        printf("6. Sap xep cac phan tu\n");
        printf("7. Tim kiem phan tu nhap vao\n");
        printf("8. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, &n);
                break;
            case 2:
                inMang(arr, n);
                break;
            case 3:
                printf("Nhap vi tri can them: ");
                scanf("%d", &viTri);
                printf("Nhap gia tri can them: ");
                scanf("%d", &giaTri);
                themPhanTu(arr, &n, viTri, giaTri);
                break;
            case 4:
                printf("Nhap vi tri can sua: ");
                scanf("%d", &viTri);
                printf("Nhap gia tri moi: ");
                scanf("%d", &giaTri);
                suaPhanTu(arr, n, viTri, giaTri);
                break;
            case 5:
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &viTri);
                xoaPhanTu(arr, &n, viTri);
                break;
            case 6:
                printf("a. Giam dan\n");
                printf("b. Tang dan\n");
                printf("Nhap lua chon: ");
                scanf(" %c", &subChoice);
                if (subChoice == 'a') {
                    sapXepGiamDan(arr, n);
                } else if (subChoice == 'b') {
                    sapXepTangDan(arr, n);
                } else {
                    printf("Lua chon khong hop le!\n");
                }
                break;
            case 7:
                printf("Nhap gia tri can tim: ");
                scanf("%d", &giaTri);
                printf("a. Tim kiem tuyen tinh\n");
                printf("b. Tim kiem nhi phan\n");
                printf("Nhap lua chon: ");
                scanf(" %c", &subChoice);
                if (subChoice == 'a') {
                    int index = timKiemTuyenTinh(arr, n, giaTri);
                    if (index != -1) {
                        printf("Tim thay gia tri %d tai vi tri %d\n", giaTri, index);
                    } else {
                        printf("Khong tim thay gia tri %d\n", giaTri);
                    }
                } else if (subChoice == 'b') {
                    int index = timKiemNhiPhan(arr, n, giaTri);
                    if (index != -1) {
                        printf("Tim thay gia tri %d tai vi tri %d\n", giaTri, index);
                    } else {
                        printf("Khong tim thay gia tri %d\n", giaTri);
                    }
                } else {
                    printf("Lua chon khong hop le!\n");
                }
                break;
            case 8:
                exit(0);
            default:
                printf("Lua chon khong hop le!\n");
        }
    }

    return 0;
}

void nhapMang(int arr[], int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap gia tri phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void inMang(int arr[], int n) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu(int arr[], int *n, int viTri, int giaTri) {
    if (*n >= MAX) {
        printf("Mang da day, khong the them phan tu!\n");
        return;
    }
    if (viTri < 0 || viTri > *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = *n; i > viTri; i--) {
        arr[i] = arr[i - 1];
    }
    arr[viTri] = giaTri;
    (*n)++;
}

void suaPhanTu(int arr[], int n, int viTri, int giaTri) {
    if (viTri < 0 || viTri >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    arr[viTri] = giaTri;
}

void xoaPhanTu(int arr[], int *n, int viTri) {
    if (viTri < 0 || viTri >= *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = viTri; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

void sapXepGiamDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sapXepTangDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int timKiemTuyenTinh(int arr[], int n, int giaTri) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == giaTri) {
            return i;
        }
    }
    return -1;
}

int timKiemNhiPhan(int arr[], int n, int giaTri) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == giaTri) {
            return mid;
        } else if (arr[mid] < giaTri) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}