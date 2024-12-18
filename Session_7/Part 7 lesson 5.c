#include <stdio.h>
int main(){
    int array[5] = {41, 50, 86, 1, 99};
    int max = array[0];
    int min = array[0];
    for(int i = 0; i < 5; i++){
        if(array[i] > max){
            max = array[i];
        }
        if(array[i] < min){
            min = array[i];
        }
    }
    printf("So lon nhat trong mang la: %d\n", max);
    printf("So nho nhat trong mang la: %d", min);
    return 0;
}

