#include <stdio.h>

int main(){
    char name[20]; //giới hạn 20 ký tự
    printf("Enter your name: ");
    scanf("%49s", name); //tránh tràng mảng
    printf("Hello %s", name);
    return 0;
}