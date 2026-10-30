#include <stdio.h>
#include <ctype.h>
int main(void) {
    FILE *in=fopen("input.txt","r"), *out; int c;
    if(!in){printf("Unable to open input.txt\n");return 1;}
    out=fopen("output.txt","w"); if(!out){fclose(in);return 1;}
    while((c=fgetc(in))!=EOF) fputc(toupper((unsigned char)c),out);
    fclose(in); fclose(out); printf("Conversion complete\n"); return 0;
}
