#include <stdio.h>
struct Date { int day, month, year; };
struct Employee { char name[80]; int id; struct Date joining; };
int main(void) {
    struct Employee e;
    scanf("%79s %d %d %d %d",e.name,&e.id,&e.joining.day,&e.joining.month,&e.joining.year);
    printf("Name: %s\nID: %d\nJoining Date: %02d-%02d-%04d\n",
           e.name,e.id,e.joining.day,e.joining.month,e.joining.year);
    return 0;
}
