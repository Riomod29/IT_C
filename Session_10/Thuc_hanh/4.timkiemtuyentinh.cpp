#include <stdio.h>

int main() {
    // 1. Nhập số phần tử và giá trị các phần tử
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Nhap gia tri cac phan tu mang:\n");
    for (int i = 0; i < n; i++) {
        printf("numbers[%d] = ", i);
        scanf("%d", &numbers[i]);
    }

    // 2. Nhập giá trị cần tìm kiếm
    int searchValue;
    printf("Nhap vao gia tri can tim trong mang: ");
    scanf("%d", &searchValue);

    // 3. Duyệt mảng tìm chỉ số phần tử có giá trị bằng
    int i;
    int flagSearched = 0; // Cờ đánh dấu không tìm thấy phần tử nào
    for (i = 0; i < n; i++) {
        if (numbers[i] == searchValue) {
            flagSearched = 1; // Có tìm thấy phần tử trong mảng
            break;
        }
    }

    // 4. In giá trị phần tử và chỉ số phần tử tìm được
    if (flagSearched == 1) {
        printf("Trong mang co phan tu chi so %d co gia tri bang %d\n", i, numbers[i]);
    } else {
        printf("Khong tim thay phan tu co gia tri %d trong mang\n", searchValue);
    }

    return 0;
}