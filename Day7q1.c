#include<stdio.h>
int main(){
int year;
printf("Enter the year for checking  whether it is leap year or not : ");
scanf("%d",&year);
if(year % 400==0)
{
    printf("Leap year");
}
else if(year%4==0 && year%100!=0)
{
    printf("Leap year");
}
else 
{
    printf("It is not a leap year");
}
return 0;
}