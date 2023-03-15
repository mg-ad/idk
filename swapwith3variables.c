#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    printf("%d %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n%d %d",a,b);
    printf("\nHello world");

    return 0;
}
