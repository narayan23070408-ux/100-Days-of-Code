#include <stdio.h>
int main(void) {
    FILE *fp=fopen("info.txt","r"); char line[500];
    if(!fp){printf("Unable to open file\n");return 1;}
    while(fgets(line,sizeof(line),fp)) printf("%s",line);
    fclose(fp); return 0;
}
