#include <stdio.h>

int check_brackets() {
    char ch;
    int count = 0;

    while (1) {
        ch = getchar();

        if (ch == '(') {
            count++;
        } else if (ch == ')') {
            count--;
        } else if (ch == '.') {
            break;
        }

        if (count < 0) {
            return 0;
        }
    }

    return (count == 0) ? 1 : 0;
}

int main() {
    printf("Enter a string of brackets, maximum 1000, end with '.'): ");
    
    int result = check_brackets();
    
    if (result) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}