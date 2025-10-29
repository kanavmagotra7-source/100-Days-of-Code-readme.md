#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n1, n2, i, j, k = 0;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for(j = 0; j < n2; j++)
        scanf("%d", &b[j]);

    // Merging arrays
    for(i = 0; i < n1; i++)
        c[k++] = a[i];
    for(j = 0; j < n2; j++)
        c[k++] = b[j];

    printf("Merged array:\n");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}
