#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter expression (a op b): ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op) {
        case '+': printf("%d\n", a + b); break;
        case '-': printf("%d\n", a - b); break;
        case '*': printf("%d\n", a * b); break;
        case '/': b ? printf("%d\n", a / b) : printf("Error! Divide by 0\n"); break;
        case '%': b ? printf("%d\n", a % b) : printf("Error! Mod by 0\n"); break;
        default:  printf("Invalid Operator\n");
    }
    return 0;
}
