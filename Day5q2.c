#include <stdio.h>
int main(){
int totalseconds,hours,minutes,seconds;
    printf("Enter the time in seconds :",totalseconds);
    scanf("%d",&totalseconds);
    hours=totalseconds/3600;
    minutes=(totalseconds%3600)/60;
    seconds=totalseconds%60;

    printf("Time=%2d:%2d:%2d\n",hours,minutes,seconds);
    return 0;
}
