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
    for (int i = 0; i < num; i++)
    {
        int num2 = arr[i];
        int j = i - 1;
        while (j>=0 && arr[j]>num2)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = num2;
    }
    printf ("Mang sau khi sap xep la:\n"); 
    for (int i = 0; i < num; i++)
    {
        printf ("%d ", arr[i]);
    }
    printf ("\n");
    return 0;
}