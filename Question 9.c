// Program to Calculate Simple and Compound Interest

#include <stdio.h>

int main() {
    float p, r, t, si, ci;

    printf("Enter principal: ");
    scanf("%f", &p);

    printf("Enter rate: ");
    scanf("%f", &r);

    printf("Enter time: ");
    scanf("%f", &t);

    // Formula for Simple Interest
    si = (p * r * t) / 100;

    // Formula for Compound Interest
    ci = p * pow((1 + r/100), t) - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}
