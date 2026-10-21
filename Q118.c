#include <stdio.h>
int main(void) {
    int a[10000],n,i; long long expected,actual=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d",&a[i]); actual+=a[i];}
    expected=(long long)n*(n+1)/2;
    printf("%lld\n",expected-actual);
    return 0;
}
