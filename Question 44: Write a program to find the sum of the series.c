#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += (double)(2*i - 1) / (2*i);
    }

    printf("Sum of series = %.2lf\n", sum);
    return 0;
}
