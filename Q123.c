#include <stdio.h>
#include <ctype.h>
int main(void) {
    FILE *fp=fopen("input.txt","r"); int c,chars=0,words=0,lines=0,inword=0,has=0;
    if(!fp){printf("Unable to open file\n");return 1;}
    while((c=fgetc(fp))!=EOF) {
        chars++; has=1;
        if(c=='\n') lines++;
        if(isspace((unsigned char)c)) inword=0;
        else if(!inword){words++;inword=1;}
    }
    if(has && chars>0) { /* count a final unterminated line */ }
    rewind(fp);
    while((c=fgetc(fp))!=EOF) if(c=='\n') { /* counted below */ }
    fclose(fp);
    printf("Characters=%d\nWords=%d\nLines=%d\n",chars,words,lines+(has && chars>0 ? 1 : 0));
    return 0;
}
