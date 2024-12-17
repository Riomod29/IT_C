#include <stdio.h>
int main() {
    int a = 0, b = 0, c = 0;
    int num, choose = 0;

    while (choose != 6) {
        printf("=====MENU=====\n");
        printf("1. Nhap 3 so.\n");
        printf("2. Tong 3 so.\n");
        printf("3. Trung binh cong 3 so.\n");
        printf("4. So nho nhat.\n");
        printf("5. So lon nhat.\n");
        printf("6. Thoat.\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choose);

        switch (choose) {
            case 1:
                printf("Moi nhap 3 so bat ky: ");
                scanf("%d %d %d", &a, &b, &c);
                printf("Da nhap 3 so: %d, %d, %d\n", a, b, c);
                break;

            case 2:
                num = a + b + c;
                printf("Tong 3 so la: %d\n\n", num);
                break;

            case 3:
                num = (a + b + c) / 3;
                printf("Trung binh cong 3 so la: %d\n", num);
                break;

            case 4: {
                int min = a;
                if (b < min){
                    min = b;
                }
                if (c < min){
                    min = c;
                }
                printf("So nho nhat trong 3 so la: %d\n", min);
                break;
            }

            case 5: {
                int max = a;
                if (b > max){
                    max = b;
                }
                if (c > max){
                    max = c;
                }
                printf("So lon nhat trong 3 so la: %d\n", max);
                break;
            }

            case 6:
                printf("Thoat!!!\n");
                break;

            default:
                printf("Lua chon khong hop le!!!\n");
        }
    }

    return 0;
}
