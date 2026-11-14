#include <stdio.h>
enum Gender { MALE, FEMALE, OTHER };
struct Person { char name[80]; enum Gender gender; };
int main(void) {
    struct Person p; int g;
    scanf("%79s %d",p.name,&g); p.gender=(enum Gender)g;
    printf("%s: ",p.name);
    if(p.gender==MALE) puts("Male");
    else if(p.gender==FEMALE) puts("Female");
    else if(p.gender==OTHER) puts("Other");
    else puts("Invalid");
    return 0;
}
