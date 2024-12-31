#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(char *str) {
    int count = 0;
    int inWord = 0;

    while (*str) {
        if (isspace(*str)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char str[100];

    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    int wordCount = countWords(str);
    printf("So tu trong chuoi: %d\n", wordCount);

    return 0;
}