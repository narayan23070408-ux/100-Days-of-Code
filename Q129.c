#include <stdio.h>
int main(void) {
    FILE *fp=fopen("numbers.txt","r"); int x,count=0; long long sum=0;
    if(!fp){printf("Unable to open numbers.txt\n");return 1;}
    while(fscanf(fp,"%d",&x)==1){sum+=x;count++;}
    fclose(fp);
    if(!count){printf("No numbers found\n");return 0;}
    printf("Sum=%lld\nAverage=%.2f\n",sum,(double)sum/count); return 0;
}
