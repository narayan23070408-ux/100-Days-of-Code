#include <stdio.h>
int main (){
float a, b;
char op;
 printf("Enter the first num :");
 scanf("%d", & a);
 printf("Enter the another number:");
 scanf("%d",& b);
 printf("Choose the operation(+,-,*,/,%):");
 scanf("%c",&op);
switch(op)
{
    case '+':
    printf("Sum = %.2f", a + b);
    break;

    case '-':
    printf("Substract = %.2f", a - b);
    break;

    case '*':
    printf("Multiply = %.2f", a * b);
    break;

    case '/' :
    printf("Divide = %.2f",a / b);
    break;

    default:
    printf("Invalid operator");
}
return 0;
}




 
 
 
    





