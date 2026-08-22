#include <stdio.h>
int main (){
    int unit;
    float bill;
    printf("Ente the amount of unit consumed :");
    scanf("%d", & unit);

    if(unit <= 100)
    {
        bill = (unit * 5);
        printf("Total bill = %.2f\n", bill);
    }
    else if(unit <= 200)
    {
        bill = (5 * 2) + (unit -100) * 7;
        printf("Total bill = %.2f\n", bill);
    }
    else if(unit <= 300)
    {
        bill = (5 * 2) + (unit - 200) * 10;
        printf("Total bill = %.2f\n", bill);
    }
    else if (unit > 300)
    {
        bill = (unit * 12);
        printf("Total bill = %.2f\n",bill);
    }
 return 0;

}