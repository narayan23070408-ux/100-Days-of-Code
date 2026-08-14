#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the two numbers :");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;

}