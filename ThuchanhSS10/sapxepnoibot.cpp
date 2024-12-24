#include <stdio.h>

int main(){
    int num,temp;
    printf ("Nhap so phan tu cua mang: ");
    scanf ("%d", &num);
    int arr[num];
    printf ("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < num; i++){
        printf ("arr[%d] = ", i);
        scanf ("%d", &arr[i]);
    }
    for (int i = 0; i < num-1; i++)
    {
        for (int j = 0; j < num-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Mang sau khi sap xep la: ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf ("\n");
    return 0;
}