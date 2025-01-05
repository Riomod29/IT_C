#include <stdio.h>
#include <string.h>

int main(){
    char s[100] = "hello world o";
    int n = strlen(s);
    char deleteCharacter;
    printf("Nhap vao ki tu can xoa: ");
    scanf("%c", &deleteCharacter);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == deleteCharacter)
        {
            for (int j = i; j < n; j++)
            {
                s[j] = s[j + 1];
            }
            n--;
            i--;
        }
    }
    printf("Chuoi sau khi xoa ki tu %c la: %s\n", deleteCharacter, s);
    return 0;
}