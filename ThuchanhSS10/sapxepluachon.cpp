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
    for (int i = 0; i < num-1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < num; j++)
        {
            if (arr[j] > arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    printf ("Mang sau khi sap xep la:\n");
    for (int i = 0; i < num; i++)
    {
        printf ("%d ", arr[i]);
    }
    printf ("\n");
    return 0;
}