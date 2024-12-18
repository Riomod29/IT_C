#include <stdio.h>
	int main(){
    	int array[7] = {1, 2, 3, 4, 5, 6, 7}, length;
    		length = sizeof(array) / sizeof(array[0]);
    		printf("Cac phan tu trong mang la: ");
    	for(int i = 0; i < 7; i++){
			printf("%d ", array[i]);
			}
   			printf("\nDo dai cua mang la: %d\n", length);

    return 0;
	}
