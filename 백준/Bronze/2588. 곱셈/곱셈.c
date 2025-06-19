#include <stdio.h>

int main()
{
    int A, B;
    int X, Y, Z;
    
    scanf("%d\n", &A);
    scanf("%d", &B);
    
    X = A * (B%10);
    Y = A * ((B%100)/10);
    Z = A * (B/100);
    
    printf("%d\n", X);
    printf("%d\n", Y);
    printf("%d\n", Z);
    printf("%d\n", A*B);
    
    return 0;
}