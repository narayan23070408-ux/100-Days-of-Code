#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[1000]; int i;
    if(!fgets(s,sizeof(s),stdin)) return 0;
    for(i=0;s[i];i++) {
        if(i==0 || s[i-1]=='.' || s[i-1]=='!' || s[i-1]=='?') {
            if(isalpha((unsigned char)s[i])) s[i]=(char)toupper((unsigned char)s[i]);
        } else s[i]=(char)tolower((unsigned char)s[i]);
    }
    printf("%s",s); return 0;
}
