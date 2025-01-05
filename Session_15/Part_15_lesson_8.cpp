#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[100] = "hello world!";
    int n = strlen(s);
    int capitalizeNext = 1;
    printf("Chuoi sau khi da viet hoa chu cai dau moi tu la: ");
    for (int i = 0; i < n; i++)
    {
        if (isspace(s[i])) {
            capitalizeNext = 1;
        } else if (capitalizeNext && isalpha(s[i])) {
            s[i] = toupper(s[i]);
            capitalizeNext = 0;
        }
        printf("%c", s[i]);
    }
    return 0;
}