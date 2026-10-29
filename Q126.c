#include <stdio.h>
int main(void) {
    char filename[256]; int c; FILE *fp;
    scanf("%255s",filename); fp=fopen(filename,"r");
    if(!fp){printf("File does not exist or cannot be opened\n");return 1;}
    while((c=fgetc(fp))!=EOF) putchar(c);
    fclose(fp); return 0;
}
