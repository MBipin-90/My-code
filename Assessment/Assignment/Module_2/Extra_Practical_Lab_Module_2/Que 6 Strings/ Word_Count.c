//  Que no.3  Word Count.
#include<stdio.h>
#include <string.h> // Required for strlen and strcpy functions

int main() {
    char sentence[200]; // store the input sentence
    char longestWord[100]; // store the longest word found
    int wordCount = 0;
    int currentWordLength = 0;
    int longestWordLength = 0;
    int i = 0;
    int longestWordStartIndex = 0;

    printf("Enter a sentence: ");
    // Read the entire line including spaces
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the newline character if present from fgets
    sentence[strcspn(sentence, "\n")] = 0;

    // Handle empty sentence case
    if (strlen(sentence) == 0) {
        printf("Number of words: 0\n");
        printf("Longest word: (No words)\n");
        return 0;
    }

    // Iterate through the sentence to count words and find the longest word
    while (sentence[i] != '\0') {
        // If current character is not a space, it's part of a word
        if (sentence[i] != ' ' && sentence[i] != '\t') {
            currentWordLength++;
        } else {
            // If it's a space and the previous character was part of a word, increment word count
            if (currentWordLength > 0) {
                wordCount++;
                // Check if current word is longer than the longest found so far
                if (currentWordLength > longestWordLength) {
                    longestWordLength = currentWordLength;
                    longestWordStartIndex = i - currentWordLength;
                }
            }
            currentWordLength = 0; // Reset for the next word
        }
        i++;
    }

    // Handle the last word in the sentence (not followed by a space)
    if (currentWordLength > 0) {
        wordCount++;
        if (currentWordLength > longestWordLength) {
            longestWordLength = currentWordLength;
            longestWordStartIndex = i - currentWordLength;
        }
    }

    printf("Number of words: %d\n", wordCount);

    // Extract the longest word
    if (longestWordLength > 0) {
        strncpy(longestWord, sentence + longestWordStartIndex, longestWordLength);
        longestWord[longestWordLength] = '\0'; // Null-terminate the string
        printf("Longest word: %s (Length: %d)\n", longestWord, longestWordLength);
    } else {
        printf("Longest word: (No words found)\n");
    }

    return 0;
}
