#include <stdio.h>
int main(void) {
    char a[1000], b[1000]; int f[256]={0}, i;
    if(!fgets(a,sizeof(a),stdin) || !fgets(b,sizeof(b),stdin)) return 0;
    for(i=0;a[i];i++) if(a[i]>='a'&&a[i]<='z') f[(unsigned char)a[i]]++;
    for(i=0;b[i];i++) if(b[i]>='a'&&b[i]<='z') f[(unsigned char)b[i]]--;
    for(i=0;i<256;i++) if(f[i]) { printf("Not Anagram\n"); return 0; }
    printf("Anagram\n"); return 0;
}
