#include <stdio.h>

int main() {
    int n, rev = 0, digit, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while(temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if(n == rev)
        printf("%d is a palindrome\n", n);
    else
        printf("%d is not a palindrome\n", n);

    return 0;
}
