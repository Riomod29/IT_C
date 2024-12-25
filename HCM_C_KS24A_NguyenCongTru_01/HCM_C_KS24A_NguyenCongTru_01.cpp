#include <stdio.h>
int main() {
    int arr[100];
    int n = 0;
    int choice;

    do {
    printf("\n			MENU goi mon: (0.0)\n"); //(●'◡'●)
        printf(" 	1. Nhap so phan tu va gia tri cho mang.\n"); //(●'◡'●)
        printf(" 	2. In ra gia tri cac phan tu trong mang.\n"); //(●'◡'●)
        printf(" 	3. Tim gia tri nho nhat va lon nhat trong mang.\n"); //(●'◡'●)
        printf(" 	4. In ra tong cua tat ca cac phan tu.\n"); //(●'◡'●)
        printf(" 	5. Them mot phan tu vao cuoi mang.\n"); //(●'◡'●)
        printf(" 	6. Xoa phan tu tai mot vi tri cu the.\n"); //(●'◡'●)
        printf(" 	7. Sap xep mang theo thu tu giam dan. (Bubble sort)\n"); //(●'◡'●)
        printf(" 	8. Tim kiem phan tu trong mang. (Linear search)\n"); //(●'◡'●)
        printf(" 	9. In ra toan bo so nguyen to trong mang.\n"); //(●'◡'●)
        printf("	10. Sap xep mang theo thu tu tang dan. (Selection sort)\n"); //(●'◡'●)
        printf(" 	0. Exit (-_0)\n"); //(●'◡'●)
        printf("			Nhap lua cho cua ban: "); //(●'◡'●)
        scanf("%d", &choice);
    switch (choice) {
            case 1:
                printf("Moi ban nhap so phan tu cua mang: ");
                scanf("%d", &n);
                printf("Moi ban nhap cac phan tu cua mang:\n");
                for (int i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                for (int i = 0; i < n; i++) {
                    printf("arr[%d] = %d\n", i, arr[i]);
                }
                break;
            case 3:
                if (n > 0) {
                    int min = arr[0], max = arr[0];
                    for (int i = 1; i < n; i++) {
                        if (arr[i] < min) min = arr[i];
                        if (arr[i] > max) max = arr[i];
                    }
                    printf("Gia tri nho nhat la: %d\n", min);
                    printf("Gia tri lon nhat la: %d\n", max);
                } else {
                    printf("Mang rong *_*\n");
                }
                break;
    		case 4:
                if (n > 0) {
                    int sum = 0;
                    for (int i = 0; i < n; i++) {
                        sum += arr[i];
                    }
                    printf("Tong cua tat ca cac phan tu la: %d\n", sum);
                } else {
                    printf("Mang rong *_*\n");
                }
                break;
            case 5:
                if (n < 100) {
                    printf("Hay nhap gia tri phan tu moi: ");
                    scanf("%d", &arr[n]);
                    n++;
                    printf("Phan tu moi da duoc them vao");
                } else {
                    printf("Mang da day, khong the them phan tu moi -_-\n");
                }
                break;
            case 6:
                if (n > 0) {
                    int pos;
                    printf("Hay nhap vi tri ban muon xoa: ");
                    scanf("%d", &pos);
                    if (pos >= 0 && pos < n) {
                        for (int i = pos; i < n-1; i++) {
                            arr[i] = arr[i+1];
                        }
                        n--;
                    } else {
                        printf("Vi tri 0 hop le\n");
                    }
                } else {
                    printf("Mang rong, khong the xoa phan tu duoc -_-\n");
                }
                break;
    		case 7:
                for (int i = 0; i < n-1; i++) {
                    for (int j = 0; j < n-i-1; j++) {
                        if (arr[j] < arr[j+1]) {
                            int temp = arr[j];
                            arr[j] = arr[j+1];
                            arr[j+1] = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep giam dan la: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 8:
                {
                    int value;
                    printf("Nhap gia tri can tim: ");
                    scanf("%d", &value);
                    bool found = false;
                    for (int i = 0; i < n; i++) {
                        if (arr[i] == value) {
                            found = true;
                            break;
                        }
                    }
                    if (found) {
                        printf("Gia tri %d co ton tai trong mang\n", value);
                    } else {
                        printf("Gia tri %d khong ton tai trong mang -_-\n", value);
                    }
                }
                break;
            case 9:
                {
                    bool found = false;
                    for (int i = 0; i < n; i++) {
                        bool isPrime = true;
                        if (arr[i] <= 1) isPrime = false;
                        for (int j = 2; j <= arr[i] / 2; j++) {
                            if (arr[i] % j == 0) {
                                isPrime = false;
                                break;
                            }
                        }
                        if (isPrime) {
                            printf("%d ", arr[i]);
                            found = true;
                        }
                    }
                    if (!found) {
                        printf("Khong co so nguyen to nao trong mang\n");
                    } else {
                        printf("\n");
                    }
                }
                break;
            case 10:
                printf("SORRY THAY EM HONG LAM DUOC CAI NAY  :))");
            case 0:
                printf("Exit truong chinh\n");
                break;
            default:
                printf("Lua chon cua ban khong hop le -_-\n");
                break;
        }
    } while (choice != 0);

    return 0;
}