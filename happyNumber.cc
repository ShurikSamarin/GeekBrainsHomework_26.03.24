#include <stdio.h>

int sum_of_digits(int num) {
    int sum = 0;
    
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    
    return sum;
}

int multiply_of_digits(int num) {
    int product = 1;
    
    while (num > 0) {
        product *= num % 10;
        num /= 10;
    }
    
    return product;
}

int is_happy_number(int n) {
    return sum_of_digits(n) == multiply_of_digits(n);
}

int main() {
    int number;
    
    printf("Input integer non-negative number: ");
    scanf("%d", &number);
    
    if (is_happy_number(number)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}