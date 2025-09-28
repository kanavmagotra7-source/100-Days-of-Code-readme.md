#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        digit = temp % 10;

        // calculate factorial of digit
        fact = 1;
        for(i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if(sum == n)
        printf("%d is a Strong number\n", n);
    else
        printf("%d is not a Strong number\n", n);

    return 0;
}
