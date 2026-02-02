#include <stdio.h>
#include <string.h>

void convertString(char input[], char output[], int length) {

    int index = 0;

    for (int i = 0; i < length; i++) {

        // Skip semicolon
        if (input[i] == ';') {
            continue;
        }

        // Replace '.' with ','
        if (input[i] == '.') {
            output[index] = ',';
        }
        else {
            output[index] = input[i];
        }

        index++;
    }

    // End output string properly
    output[index] = '\0';
}

int main() {

    char inputString[400];
    char outputString[400];

    printf("Enter the string: ");
    fgets(inputString, 400, stdin);

    int length = strlen(inputString);

    convertString(inputString, outputString, length);

    printf("Result: %s", outputString);

    return 0;
}
