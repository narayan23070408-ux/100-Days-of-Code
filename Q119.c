#include <stdio.h>
int main(void) {
    int a[10000],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) for(j=i+1;j<n;j++)
        if(a[i]==a[j]) { printf("%d\n",a[i]); return 0; }
    printf("-1\n"); return 0;
}
