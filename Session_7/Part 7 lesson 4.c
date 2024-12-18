#include <stdio.h>
int main(){
    int n;
	    printf("Nhap so phan tu cua mang: ");
	    scanf("%d", &n);
	    	int array[n];
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ",i + 1 );
        scanf("%d", &array[i]);
    }
    	printf("Cac phan tu co trong mang la: ");
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
