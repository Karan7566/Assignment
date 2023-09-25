#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100]; 
    char reversedStr[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str); 
    int length = strlen(str);

    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        reversedStr[j] = str[i];
    }
    reversedStr[j] = '\0';

    if (strcmp(str, reversedStr) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
