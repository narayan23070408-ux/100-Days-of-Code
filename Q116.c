#include <stdio.h>
int main(void) {
    int a[1000],n,target,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&target);
    for(i=0;i<n;i++) for(j=i+1;j<n;j++)
        if(a[i]+a[j]==target) { printf("%d %d\n",i,j); return 0; }
    printf("-1 -1\n"); return 0;
}
