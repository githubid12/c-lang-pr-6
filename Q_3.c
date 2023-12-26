#include <ctype.h>
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int totalAlphabets = 0;
    int totalDigits = 0;
    int totalSpecialChars = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            totalAlphabets++;
        } else if (isdigit(str[i])) {
            totalDigits++;
        } else {
            totalSpecialChars++;
        }
    }

    printf("Total alphabets: %d\n", totalAlphabets);
    printf("Total digits: %d\n", totalDigits);
    printf("Total special characters: %d\n", totalSpecialChars);

    return 0;
}
