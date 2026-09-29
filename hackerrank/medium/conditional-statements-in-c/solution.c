#include <stdio.h>

int main() {
    int n;
    // Reads the integer input from standard input
    if (scanf("%d", &n) == 1) {
        
        // Check conditions from 1 to 9
        if (n == 1) {
            printf("one\n");
        } else if (n == 2) {
            printf("two\n");
        } else if (n == 3) {
            printf("three\n");
        } else if (n == 4) {
            printf("four\n");
        } else if (n == 5) {
            printf("five\n");
        } else if (n == 6) {
            printf("six\n");
        } else if (n == 7) {
            printf("seven\n");
        } else if (n == 8) {
            printf("eight\n");
        } else if (n == 9) {
            printf("nine\n");
        } else if (n > 9) {
            printf("Greater than 9\n");
        }
    }
    return 0;
}
