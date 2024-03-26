#include <stdio.h>

int nod(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int main() {
    int num1, num2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    
    int result = nod(num1, num2);
    
    printf("Greatest Common Divisor of %d and %d is: %d\n", num1, num2, result);
    
    return 0;
}