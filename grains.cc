#include <stdio.h>

long long int calculateGrains(int n) {
    if (n < 1 || n > 64) {
        return -1;
    }
    
    long long int grains = 1;
    
    for (int i = 1; i < n; i++) {
        grains *= 2;
    }
    
    return grains;
}

int main() {
    int n;
    printf("Enter the number of the cell (1-64): ");
    scanf("%d", &n);
    
    long long int result = calculateGrains(n);
    
    if (result == -1) {
        printf("Invalid input.\n");
    } else {
        printf("Number of grains on cell %d: %lld\n", n, result);
    }
    
    return 0;
}