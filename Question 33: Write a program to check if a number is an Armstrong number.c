#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digit, sum = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // count digits
    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while(temp > 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if(sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);

    return 0;
}
