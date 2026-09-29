#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    float x, y;
    
    // Read two integers from the first line
    scanf("%d %d", &n, &m);
    
    // Read two float numbers from the second line
    scanf("%f %f", &x, &y);
    
    // Print the sum and difference of the integers
    printf("%d %d\n", n + m, n - m);
    
    // Print the sum and difference of the floats rounded to 1 decimal place
    printf("%.1f %.1f\n", x + y, x - y);
    
    return 0;
}
