#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int maxAnd = 0;
    int maxOr = 0;
    int maxXor = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int and_result = i & j;
            int or_result = i | j;
            int xor_result = i ^ j;
            
            if (and_result < k && and_result > maxAnd) {
                maxAnd = and_result;
            }
            if (or_result < k && or_result > maxOr) {
                maxOr = or_result;
            }
            if (xor_result < k && xor_result > maxXor) {
                maxXor = xor_result;
            }
        }
    }
    
    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);
}

int main() {
    int n, k;
  
    if (scanf("%d %d", &n, &k) == 2) {
        calculate_the_maximum(n, k);
    }
    
    return 0;
}
