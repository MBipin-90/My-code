//  Que no.2  Count Vowels and Consonants.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, specialChars = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        ch = tolower(ch);  // Convert to lowercase for easier comparison

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else {
            specialChars++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);

    return 0;
}
