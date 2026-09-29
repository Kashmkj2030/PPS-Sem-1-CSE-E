#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    // Complete the code to calculate the sum of the five digits on n.
    int sum = 0;
    while (n > 0) {
        sum += n % 10;  // Get the last digit and add it to sum
        n /= 10;        // Remove the last digit from n
    }
    
    printf("%d\n", sum);
    
    return 0;
}
