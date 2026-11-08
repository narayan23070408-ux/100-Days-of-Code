#include <stdio.h>
enum Status { SUCCESS, FAILURE, TIMEOUT };
int main(void) {
    int s; scanf("%d",&s);
    switch((enum Status)s) {
        case SUCCESS: printf("Operation successful\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
        default: printf("Invalid status\n");
    }
    return 0;
}
