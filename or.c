#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    if(a%2||a%3)
    {
        printf("yes its divisible by 3 or 2");
    }
    else
    { 
        printf("no its not divisible by 3 or 2");
    }
    return 0;
}
