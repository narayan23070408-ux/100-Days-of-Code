#include <stdio.h>
struct Student { char name[80]; int roll_no; float marks; };
int main(void) {
    struct Student s;
    scanf("%79s %d %f",s.name,&s.roll_no,&s.marks);
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n",s.name,s.roll_no,s.marks);
    return 0;
}
