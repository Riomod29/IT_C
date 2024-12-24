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
    printf ("MENU:\n");
    printf ("1. In gia tri cac phan tu cua mang.\n");
    printf ("2. Su dung insertion sort sap xep giam dan roi in ra.\n");
    printf ("3. Su dung selection sort sap xep tang dan roi in ra.\n");
    printf ("4. Su dung bubble sort sap xep giam dan roi in ra.\n");
    printf ("5. Thoat chuong trinh.\n");
    printf ("6. Ban muon co tien khong???\n");
    int choice;
    printf ("Chon chuc nang: ");
    scanf ("%d", &choice);
    while (choice != 10)
    {
        switch (choice)
        {
        case 1:
            printf ("Cac phan tu cua mang la:\n");
            for (int i = 0; i < num; i++)
            {
                printf ("%d ", arr[i]);
            }
            break;
        case 2:
            for (int i = 0; i < num; i++)
            {
                int num2 = arr[i];
                int j = i - 1;
                while (j>=0 && arr[j]<num2)
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
            break;
        case 3:
            for (int i = 0; i < num-1; i++)
            {
                int minIndex = i;
                for (int j = i + 1; j < num; j++)
                {
                    if (arr[j] < arr[minIndex])
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
            break;
        case 4:
            for (int i = 0; i < num-1; i++)
            {
                for (int j = 0; j < num-i-1; j++)
                {
                    if (arr[j]<arr[j+1])
                    {
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
            }
            printf ("Mang sau khi sap xep la:\n");
            for (int i = 0; i < num; i++)
            {
                printf ("%d ", arr[i]);
            }
            break;
        case 5:
            printf ("Thoat chuong trinh.\n");
            break;
        case 6:
        	printf ("https://fb88hm.com\n");
        default:
            printf ("Lua chon khong hop le.\n");
            break;
        }
        printf ("\nChon chuc nang: ");
        scanf ("%d", &choice);
    }
    return 0;
}