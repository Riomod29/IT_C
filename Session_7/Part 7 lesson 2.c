#include <stdio.h>
int main(){
    int n, array[5];
    	printf("Nhap cac phan tu trong mang: \n");
    for(int i = 0; i < 5; i++){
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    		}
    	printf("Cac phan tu trong mang la: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    		}
    return 0;
	}
