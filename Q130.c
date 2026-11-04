#include <stdio.h>
typedef struct { char name[80]; int roll; float marks; } Student;
int main(void) {
    FILE *fp=fopen("students.txt","w"); Student s; int n,i;
    if(!fp){printf("File error\n");return 1;}
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%79s %d %f",s.name,&s.roll,&s.marks);fprintf(fp,"%s %d %.2f\n",s.name,s.roll,s.marks);}
    fclose(fp);
    fp=fopen("students.txt","r"); if(!fp)return 1;
    while(fscanf(fp,"%79s %d %f",s.name,&s.roll,&s.marks)==3)
        printf("%s %d %.2f\n",s.name,s.roll,s.marks);
    fclose(fp); return 0;
}
