#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    
    // Array of string representations for numbers 1 to 9
    char *words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // Loop through the interval [a, b]
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // Print the word corresponding to the digit
            printf("%s\n", words[i - 1]);
        } else if (i > 9) {
            // Check if the number is even or odd
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }

    return 0;
}
