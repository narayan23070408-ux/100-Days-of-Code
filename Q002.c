#include <stdio.h>
int main(void) {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Sum=%.2f, Diff=%.2f, Product=%.2f, ", a+b, a-b, a*b);
    if (b == 0) printf("Quotient=undefined\n");
    else printf("Quotient=%.2f\n", a/b);
    return 0;
}
