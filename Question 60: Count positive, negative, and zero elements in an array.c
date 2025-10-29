#include <stdio.h>

int main() {
    int n, i, arr[100];
    int pos = 0, neg = 0, zero = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive = %d\nNegative = %d\nZero = %d\n", pos, neg, zero);

    return 0;
}
