#include <stdio.h>
struct Student { char name[80]; int roll_no; float marks; };
int main(void) {
    struct Student s[5]; int i,best=0;
    for(i=0;i<5;i++) scanf("%79s %d %f",s[i].name,&s[i].roll_no,&s[i].marks);
    for(i=1;i<5;i++) if(s[i].marks>s[best].marks) best=i;
    printf("%s %d %.2f\n",s[best].name,s[best].roll_no,s[best].marks);
    return 0;
}
