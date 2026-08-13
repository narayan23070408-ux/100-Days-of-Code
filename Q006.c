#include <stdio.h>
int main(void) {
    int a, b, temp;
    scanf("%d %d", &a, &b);
    temp = a; a = b; b = temp;
    printf("After swap: %d %d\n", a, b);
    return 0;
}
