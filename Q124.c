#include <stdio.h>
int main(void) {
    char src[256],dst[256]; int c; FILE *in,*out;
    scanf("%255s %255s",src,dst);
    in=fopen(src,"rb"); if(!in){printf("Cannot open source\n");return 1;}
    out=fopen(dst,"wb"); if(!out){fclose(in);printf("Cannot open destination\n");return 1;}
    while((c=fgetc(in))!=EOF) fputc(c,out);
    fclose(in); fclose(out); printf("File copied\n"); return 0;
}
