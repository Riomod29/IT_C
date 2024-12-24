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
    printf ("Nhap phan tu can tim: ");
    int element;
    scanf ("%d", &element);
    int pos[num];
    for (int i = 0; i < num; i++)
    {
        if (arr[i] == element)
        {
            pos[i] = i;
            printf ("Phan tu %d duoc tim thay tai vi tri %d.\n", element, i);
        }
    }
    printf ("\n");
    return 0;
}