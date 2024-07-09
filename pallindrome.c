#include <stdio.h>
#include <string.h>

int main() {
    char str1[10] = "malayalam";
    char str2[10];
    int i, j;
    int length;
    
    length = strlen(str1);

    // Copy str1 to str2 in reverse order
    for (i = 0, j = length - 1; i < length; i++, j--) {
        str2[i] = str1[j];
    }
    str2[length] = '\0'; // Add null terminator to str2

    // Compare reversed string str2 with original string str1
    if (strcmp(str1, str2) == 0) {
        printf("%s is a palindrome.\n", str1);
    } else {
        printf("%s is not a palindrome.\n", str1);
    }

    return 0;
}

