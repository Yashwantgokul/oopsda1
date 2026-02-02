#include <stdio.h>
#include <string.h>

void mytoupper(char *str, char *result, int n) {

    int len = strlen(str);

    // If n is greater than length, convert the whole string
    if (n > len) {
        n = len;
    }

    // Start from last n characters
    str = str + len - n;

    for (int i = 0; i < n; i++) {

        if (str[i] >= 'a' && str[i] <= 'z') {
            result[i] = str[i] - 32;   // convert to uppercase
        } 
        else {
            result[i] = str[i];
        }
    }

    result[n] = '\0';
}

int main() {

    char s[40];
    char s1[40];
    int n;

    printf("Enter the string: ");
    scanf("%s", s);

    printf("Enter n: ");
    scanf("%d", &n);

    mytoupper(s, s1, n);

    printf("Result: %s\n", s1);

    return 0;
}