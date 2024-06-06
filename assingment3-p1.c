#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, flag = 0;

    printf("Enter the First string\n");
    scanf("%s", str1);

    printf("Enter the Second string\n");
    scanf("%s", str2);

    for (i = 0; str1[i]!= '\0' && str2[i]!= '\0'; i++) {
        if (str1[i]!= str2[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        printf("Strings are not equal\n");
    } else {
        if (str1[i] == '\0' && str2[i] == '\0')
            printf("Strings are equal\n");
        else if (str1[i] == '\0')
            printf("Second string is longer\n");
        else
            printf("First string is longer\n");
    }

    return 0;
}
