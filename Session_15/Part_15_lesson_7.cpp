#include <stdio.h>
#include <string.h>

int main(){
    char s[100] = "Hello my gmail is test123@gmail.com";
    int n = strlen(s), alphabetCount = 0, numberCount = 0, specialCharacterCount = 0;
    for (int i = 0; i < n; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            alphabetCount++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            numberCount++;
        }
        else
        {
            specialCharacterCount++;
        }
    }
    printf("So ki tu la chu cai trong chuoi la: %d\n", alphabetCount);
    printf("So ki tu la so trong chuoi la: %d\n", numberCount);
    printf("So ki tu la ki tu dac biet trong chuoi la: %d\n", specialCharacterCount);
    return 0;
}