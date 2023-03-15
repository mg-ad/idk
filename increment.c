#include <stdio.h>

int main() {
    int a=1;
    int b=a++;
    printf("b is %d ",b);
    int c=a++;
    printf("c is %d",c);
    return 0;
}
