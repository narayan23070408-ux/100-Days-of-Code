#include <stdio.h>
int main(){
    int days;
    float fine;
    printf("Enter the number of late days :");
    scanf("%d", &days);

    if(days<=5)
    {
        fine = days * 2;
        printf("Fine availed are :%.2f\n", fine);
    }
    else if (days <= 10)
    {
        fine = (5 * 2) + (days - 2)*4;
        printf("Fine = %.2f\n");
    }
    else if(days <= 15)
    {
        fine = (5 *2)+(5 * 4) + (days - 10)*6;
        printf("Fine = %.2f\n", fine);
    }
    else 
    {
        printf("Membership cancelled");
    }
    return 0;
}