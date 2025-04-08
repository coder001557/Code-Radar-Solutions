#include <stdio.h>

int main() {
    char ch;

    scanf(" %c", &ch);

    // Check for alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Convert uppercase to lowercase manually for vowel check
        char lower = ch;
        if (ch >= 'A' && ch <= 'Z') {
            lower = ch + 32;
        }

        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("Vowel.\n", ch);
        } else {
            printf("Consonant.\n", ch);
        }

    } else if (ch >= '0' && ch <= '9') {
        printf("Digit.\n", ch);
    } else {
        printf("Special character.\n", ch);
    }

    return 0;
}
