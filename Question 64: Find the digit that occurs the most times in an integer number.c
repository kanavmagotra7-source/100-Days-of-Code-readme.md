#include <stdio.h>

int main() {
    int num, digit, i;
    int freq[10] = {0};  // To store frequency of each digit (0–9)

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Count frequency of each digit
    while(num != 0) {
        digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }

    // Find the digit with maximum frequency
    int max = freq[0], most = 0;
    for(i = 1; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            most = i;
        }
    }

    printf("Digit that occurs the most: %d\n", most);
    printf("It occurs %d times.\n", max);

    return 0;
}
