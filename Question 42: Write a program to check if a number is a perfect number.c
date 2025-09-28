#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digits = 0, first, last, swapped;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = temp % 10;

    // count digits
    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    first = n / pow(10, digits - 1);
    swapped = last * pow(10, digits - 1) + (n % (int)pow(10, digits - 1) - last) + first;

    printf("Number after swapping first and last digit = %d\n", swapped);

    return 0;
}
