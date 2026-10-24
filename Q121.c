#include <stdio.h>
int main(void) {
    FILE *fp=fopen("info.txt","w"); char name[100]; int age;
    if(!fp){printf("File error\n");return 1;}
    scanf("%99s %d",name,&age);
    fprintf(fp,"Name: %s\nAge: %d\n",name,age);
    fclose(fp); printf("Data saved successfully\n"); return 0;
}
