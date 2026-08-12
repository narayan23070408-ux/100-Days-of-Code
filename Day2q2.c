#include <stdio.h>
int main(){
    int radius,area,circumference;
    printf("Enter the radius:");
    scanf("%d",&radius);
    area=3.14 *radius * radius;
circumference=2 *3.14 *radius;
printf("area=%d\n",area);
printf("circumference=%d",circumference);
return 0;

}