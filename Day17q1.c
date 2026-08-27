//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main (){
    int n, original, sum, digit, remainder;
    printf("Enter n:");
    scanf("%d", &n);
    original = n;
    while(n != 0)
    {
        digit = n % 10;
        sum = digit + (remainder * remainder * remainder);
        n = n/10;
    } 
    if(original = sum)
    {
        printf("Armstrong");
    }
    else 

    {
        printf("Not a armstrong");
    }
    return 0;
}