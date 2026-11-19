#include <stdio.h>
struct Student { char name[80]; int roll_no; float marks; };
struct Student topStudent(struct Student s[5]) {
    int i,best=0;
    for(i=1;i<5;i++) if(s[i].marks>s[best].marks) best=i;
    return s[best];
}
int main(void) {
    struct Student s[5],top; int i;
    for(i=0;i<5;i++) scanf("%79s %d %f",s[i].name,&s[i].roll_no,&s[i].marks);
    top=topStudent(s);
    printf("%s %d %.2f\n",top.name,top.roll_no,top.marks);
    return 0;
}
