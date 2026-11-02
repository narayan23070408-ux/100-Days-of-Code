#include <stdio.h>
#include <ctype.h>
int main(void) {
    FILE *fp=fopen("input.txt","r"); int c,v=0,co=0;
    if(!fp){printf("Unable to open file\n");return 1;}
    while((c=fgetc(fp))!=EOF) if(isalpha((unsigned char)c)) {
        c=tolower((unsigned char)c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') v++; else co++;
    }
    fclose(fp); printf("Vowels=%d\nConsonants=%d\n",v,co); return 0;
}
