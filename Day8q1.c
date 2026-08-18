#include <stdio.h>
int main(){
char ch;
printf("Enter a character :");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
{
    printf("Lower case");
}
else if(ch>='A' && ch<='Z')
{
    printf("upper case");
}
else if(ch>='1' && ch<='9')
{
    printf("Digit");
}
else
{
    printf("special character");
}
return 0;
}