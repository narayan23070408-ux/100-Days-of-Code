
#include <stdio.h>
int main(){
   int i, n, factorial =1;
    printf("Enter n:");
  scanf("%d", &n);
  for(i=1 ; i <=n; i ++)
  {
    factorial = factorial * i;
  }
printf("The Factorial are:%d",factorial);
return 0;
}