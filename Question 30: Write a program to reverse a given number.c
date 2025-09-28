#include <stdio.h>

int main() {
    int n, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        digit = n % 10;       // get last digit
        rev = rev * 10 + digit; // build reverse
        n /= 10;              // remove last digit
    }

    printf("Reversed number = %d\n", rev);
    return 0;
}
