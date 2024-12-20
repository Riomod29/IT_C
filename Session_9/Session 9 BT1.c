#include <stdio.h>

int main()
{
    int arr[100], n;
    do {
        printf("Nhap so luong phan tu muon nhap (toi da 100): ");
        scanf("%d", &n);

        if (n < 0 || n > 100) {
            printf("So luong phan tu khong hop le! Vui long nhap lai.\n");
        }
    } while (n < 0 || n > 100);
    printf("\nVui long nhap %d phan tu:\n", n);
    for(int i = 0; i < n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    int currentLength = n;
    int addValue, addIndex;
    printf("\nNhap gia tri can them: ");
    scanf("%d", &addValue);

    do{
        printf("\nNhap vi tri can them (0 - 99): ");
        scanf("%d", &addIndex);

        if(addIndex < 0 || addIndex >= 100){
            printf("Vi tri khong hop le! Vui long nhap lai.\n");
        }
    }while(addIndex < 0 || addIndex >= 100);

    if(addIndex >= currentLength){
        arr[addIndex] = addValue;
        currentLength = addIndex + 1;
    } else{
        for(int i = currentLength; i > addIndex; i--){
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = addValue;
        currentLength++;
    }

    printf("\nMang sau khi them:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    

    return 0;
}
