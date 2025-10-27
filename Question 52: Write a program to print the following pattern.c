#include <stdio.h>

int main() {
    int i, j;
    int groups[] = {1, 3, 5, 3, 1}; // number of * in each group
    int g;

    for (g = 0; g < 5; g++) {   // outer loop for groups
        for (i = 0; i < groups[g]; i++) {  // inner loop for stars
            printf("*\n");
        }
        printf("\n");  // blank line between groups
    }

    return 0;
}
