#include <stdio.h>
int main(){
    int hang, cot;
	    printf("Nhap so hang: ");
	    	scanf("%d", &hang);
	    printf("Nhap so cot: ");
	    	scanf("%d", &cot);
    int array2D[hang][cot];
    
    for(int i = 0; i < hang; i++){
        for(int j = 0; j < cot; j++){
            printf("Nhap cac phan tu hang %d, cot %d: ", i + 1, j + 1);
				scanf("%d", &array2D[i][j]);
        }
    }
			printf("Mang 2d vua nhap la:\n ");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", array2D[i][j]);
        }
			printf("\n ");
    }
    return 0;
}
