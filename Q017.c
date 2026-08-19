#include <stdio.h>
#include <math.h>
int main(void) {
    double a, b, c, d, r1, r2;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        if (b == 0) printf(c == 0 ? "Infinite solutions\n" : "No solution\n");
        else printf("Root = %.2f\n", -c/b);
        return 0;
    }
    d = b*b - 4*a*c;
    if (d > 0) {
        r1 = (-b + sqrt(d))/(2*a); r2 = (-b - sqrt(d))/(2*a);
        printf("Two distinct real roots: %.2f %.2f\n", r1, r2);
    } else if (d == 0) printf("Two equal real roots: %.2f\n", -b/(2*a));
    else printf("Complex roots: %.2f + %.2fi, %.2f - %.2fi\n",
                -b/(2*a), sqrt(-d)/(2*a), -b/(2*a), sqrt(-d)/(2*a));
    return 0;
}
