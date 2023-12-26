#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0;
    int totalWords = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            totalWords++;
        }
    }

    if (str[0] != ' ') {
        totalWords++;
    }

    printf("Total words: %d\n", totalWords);

}
