#include <stdio.h>

int sum_of_numbers(int n) {
    int sum = 0;
    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    
    return sum;
}

int main() {
    int number;
    
    printf("Enter a positive integer number: ");
    scanf("%d", &number);
    
    int result = sum_of_numbers(number);
    
    printf("Sum of numbers from 1 to %d is: %d\n", number, result);
    
    return 0;
}