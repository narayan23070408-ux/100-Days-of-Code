#include <stdio.h>
#include <string.h>
int main(void) {
    char s[2000]; int last[256], i, start=0, best=0, len;
    if (!fgets(s,sizeof(s),stdin)) return 0;
    len=(int)strlen(s); if(len && s[len-1]=='\n') s[--len]='\0';
    for(i=0;i<256;i++) last[i]=-1;
    for(i=0;i<len;i++) {
        unsigned char c=(unsigned char)s[i];
        if(last[c]>=start) start=last[c]+1;
        last[c]=i;
        if(i-start+1>best) best=i-start+1;
    }
    printf("%d\n",best);
    return 0;
}
