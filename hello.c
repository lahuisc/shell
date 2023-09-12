#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


int main(int argc, char **argv) {
    char input[1024]; // Assuming a maximum input length of 1024 characters
    printf("Enter a sentence: ");

    if (fgets(input, sizeof(input), stdin) != NULL) {
        char *token = strtok(input, " \t\n"); // Tokenize the input string by space, tab, or newline

        while (token != NULL) {
            printf("%s\n", token); // Print each word on a new line
            token = strtok(NULL, " \t\n"); // Get the next token
        }
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}






