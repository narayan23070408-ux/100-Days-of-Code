#include <stdio.h>
int main(void) {
    int d, fine;
    scanf("%d", &d);
    if (d < 0) printf("Invalid days\n");
    else if (d > 30) printf("Membership Cancelled\n");
    else {
        fine = (d < 5 ? d : 5) * 2;
        if (d > 5) fine += (d < 10 ? d-5 : 5) * 4;
        if (d > 10) fine += (d-10) * 6;
        printf("Fine Rs.%d\n", fine);
    }
    return 0;
}
