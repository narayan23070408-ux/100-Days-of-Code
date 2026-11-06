#include <stdio.h>
enum Signal { RED, YELLOW, GREEN };
int main(void) {
    int x; scanf("%d",&x);
    switch((enum Signal)x) {
        case RED: printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN: printf("Go\n"); break;
        default: printf("Invalid signal\n");
    }
    return 0;
}
