#include <stdio.h>

int main() {
    int n, i, arr[100], key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("%d found at position %d\n", key, i + 1);
    else
        printf("%d not found in the array\n", key);

    return 0;
}
