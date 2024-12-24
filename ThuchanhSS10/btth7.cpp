#include <stdio.h>

int main() {
    int row, col;
    printf("Nhap so hang cua mang: ");
    scanf("%d", &row);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &col);
    int arr[row][col];
    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf ("MENU:\n");
    printf ("1. In gia tri cac phan tu cua mang.\n");
    printf ("2. Su dung insertion sort sap xep giam dan roi in ra.\n");
    printf ("3. Su dung selection sort sap xep tang dan roi in ra.\n");
    printf ("4. Su dung bubble sort sap xep giam dan roi in ra.\n");
    printf ("5. Thoat chuong trinh.\n");
    int choice;
    printf ("Chon chuc nang: ");
    scanf ("%d", &choice);
    while (choice != 5)
    {
        switch (choice)
        {
        case 1:
            printf ("Cac phan tu cua mang la:\n");
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    printf ("%d ", arr[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    int num2 = arr[i][j];
                    int k = j - 1;
                    while (k>=0 && arr[i][k]<num2)
                    {
                        arr[i][k+1] = arr[i][k];
                        k--;
                    }
                    arr[i][k+1] = num2;
                }
            }
            printf ("Mang sau khi sap xep la:\n"); 
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    printf ("%d ", arr[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    int minIndex = j;
                    for (int k = j + 1; k < col; k++)
                    {
                        if (arr[i][k] < arr[i][minIndex])
                        {
                            minIndex = k;
                        }
                    }
                    int temp = arr[i][minIndex];
                    arr[i][minIndex] = arr[i][j];
                    arr[i][j] = temp;
                }
            }
            printf ("Mang sau khi sap xep la:\n"); 
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    printf ("%d ", arr[i][j]);
                }
                printf("\n");
            }
            break;
        case 4:
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    for (int k = 0; k < col-j-1; k++)
                    {
                        if (arr[i][k]<arr[i][k+1])
                        {
                            int temp=arr[i][k];
                            arr[i][k]=arr[i][k+1];
                            arr[i][k+1]=temp;
                        }
                    }
                }
                printf ("Mang sau khi sap xep la:\n");
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < col; j++)
                    {
                        printf ("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
            }
            break;
        case 5:
            printf ("Thoat chuong trinh.\n");
            break;
        default:
            printf ("Vui long chon dung chuc nang.\n");
            break;
        }
        printf ("Chon chuc nang: ");
        scanf ("%d", &choice);
    }
    return 0;
}