#include <stdio.h>
int main(void) {
    int a[1000], n, k, i, j, t;
    scanf("%d", &n);
    for (i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    if (k<1 || k>n) { printf("Invalid k\n"); return 0; }
    for (i=0;i<n-1;i++) for (j=i+1;j<n;j++)
        if (a[i]>a[j]) { t=a[i]; a[i]=a[j]; a[j]=t; }
    printf("%d\n",a[k-1]);
    return 0;
}
