#include <stdio.h>
enum Operation { ADD=1, SUBTRACT, MULTIPLY };
int main(void) {
    int choice,a,b; scanf("%d %d %d",&choice,&a,&b);
    switch((enum Operation)choice) {
        case ADD: printf("%d\n",a+b); break;
        case SUBTRACT: printf("%d\n",a-b); break;
        case MULTIPLY: printf("%d\n",a*b); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
