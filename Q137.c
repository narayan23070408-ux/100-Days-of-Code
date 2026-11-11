#include <stdio.h>
enum Role { ADMIN=1, USER, GUEST };
int main(void) {
    int r; scanf("%d",&r);
    switch((enum Role)r) {
        case ADMIN: printf("Administrator access\n"); break;
        case USER: printf("User access\n"); break;
        case GUEST: printf("Guest access\n"); break;
        default: printf("Invalid role\n");
    }
    return 0;
}
