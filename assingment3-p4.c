#include <stdio.h>
#include <string.h>

int is_palindrome(char s[]) {
    int i, j;
    int length = strlen(s);

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            return 0; // not a palindrome
        }
    }

    return 1; // palindrome
}

int main() {
    char s[100];

    printf("\nEnter a string: ");
    scanf("%s", s);

    if (is_palindrome(s)) {
        printf("\nThe string is a palindrome.");
    } else {
        printf("\nThe string is not a palindrome.");
    }

    return 0;
}
