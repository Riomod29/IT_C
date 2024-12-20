#include <stdio.h>

int main()
{
    int array[100], n;
    do{
         printf("Nhap so luong phan tu muon nhap (toi da 100): ");
        scanf("%d", &n);

        if(n < 0 || n > 100){
         printf("So luong phan tu khong hop le! Vui long nhap lai.\n");
        }
    } while(n < 0 || n > 100);
    
    printf("\nVui long nhap %d phan tu:\n", n);
    for(int i = 0; i < n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%d", &array[i]);
    }

    int currentLength = n;
    int deleteIndex;
    do{
    printf("\nNhap vi tri can xoa (0 - %d): ", currentLength - 1);
        scanf("%d", &deleteIndex);

        if(deleteIndex < 0 || deleteIndex >= currentLength){
            printf("Vi tri khong hop le! Vui long nhap lai.\n");
        }
    } while(deleteIndex < 0 || deleteIndex >= currentLength);

    for(int i = deleteIndex; i < currentLength - 1; i++){
        array[i] = array[i + 1];
    }
    currentLength--;
    
    printf("\nMang sau khi xoa:\n");
    for (int i = 0; i < currentLength; i++) {
    printf("%d ", array[i]);
    }
    
    
    printf("\n");

    return 0;
}

