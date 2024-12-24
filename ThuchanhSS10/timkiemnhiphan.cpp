#include <stdio.h>

int main(){
    int num;
    printf ("Nhap so phan tu cua mang: ");
    scanf ("%d", &num);
    int arr[num];
    printf ("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < num; i++){
        printf ("arr[%d] = ", i);
        scanf ("%d", &arr[i]);
    }
    int element;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &element);
    int left = 0, right = num - 1;
    int found = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == element) {
            found = mid;
            break;
        } else if (arr[mid] < element) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (found != -1) {
        printf("Phần tử %d được tìm thấy tại vị trí %d.\n", element, found);
    } else {
        printf("Phần tử %d không tồn tại trong mảng.\n", element);
    }
    printf ("\n");
    return 0;
}