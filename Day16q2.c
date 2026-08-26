#include <stdio.h>
int main(){
    int n, rev = 0, digit, original;
    printf("Enter the no to reverse:");
    scanf("%d", &n);
    original = n;
    while(n != 0)
    {
        digit = n %10;
        rev = rev* 10 + digit;
        n= n /10;
    }
printf("Reversed no is: %d\n", rev);
if(original == rev)
{
    printf("Palindrome");
}
else
{
    printf("Not a palindrome");
}
return 0;
}