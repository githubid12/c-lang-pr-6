#include <ctype.h>
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int totalVowels = 0;
    int totalConsonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (strchr("aeiouAEIOU", str[i]) != NULL) {
                totalVowels++;
            } else {
                totalConsonants++;
            }
        }
    }

    printf("Total vowels: %d\n", totalVowels);
    printf("Total consonants: %d\n", totalConsonants);

    return 0;
}
