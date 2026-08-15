#include <stdio.h>
#include <math.h>
int main(){
float principal, rate, time;
float compound_interest,simple_interest,amount;
printf("enter the principal :");
scanf("%f",&principal);
printf("Enter the rate:");
scanf("%f",&rate);
printf("Enter the Time:");
scanf("%f",&time);
simple_interest=(principal*rate*time)/100;
amount=principal*pow((1+rate/100),time);
compound_interest=amount-principal;
printf("simple interst=%.2f\n",simple_interest);
printf("compound interest=%.2f\n",compound_interest);
printf("amount=%.2f\n",amount);
return 0;

}