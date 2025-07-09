//  Que no.1  String Reversal.
#include<stdio.h>
// Function to calculate the length of a string without using strlen()
int custom_strlen(char *s) {
    int length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return length;
}

// Function to reverse a string in-place without using strrev()
void reverse_string(char *s) {
    int length = custom_strlen(s);
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) {
        // Swap characters at start and end
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        // Move pointers towards the middle
        start++;
        end--;
    }
}
int main() {
    char str[100]; // Declare a character array to store the string

    printf("Enter a string: ");
    // Read the string from the user. Using fgets for safer input handling.
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character if present from fgets
    int len = custom_strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("Original string: %s\n", str);

    reverse_string(str);

    printf("Reversed string: %s\n", str);
}
