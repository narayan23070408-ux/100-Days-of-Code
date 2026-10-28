#include <stdio.h>
int main(void) {
    FILE *fp=fopen("info.txt","a"); char line[1000];
    if(!fp){printf("Unable to open file\n");return 1;}
    getchar(); if(fgets(line,sizeof(line),stdin)) fputs(line,fp);
    fclose(fp); printf("Text appended\n"); return 0;
}
