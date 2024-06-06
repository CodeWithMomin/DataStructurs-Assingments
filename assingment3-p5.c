#include <stdio.h>

void concatenate_strings(char str1[], char str2[], char result[]) {
    int i, j;

    // copy str1 into result
    for (i = 0; str1[i]!= '\0'; i++) {
        result[i] = str1[i];
    }

    // append str2 to result
    for (j = 0; str2[j]!= '\0'; j++) {
        result[i + j] = str2[j];
    }

    // null-terminate the result string
    result[i + j] = '\0';
}

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char result[200];

    concatenate_strings(str1, str2, result);

    printf("Concatenated string: %s\n", result);

    return 0;
}
