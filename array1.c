#include <stdio.h>

int main() {
    int array[5],j,i,m=1;
    printf("enter the array content\n");
    for(j=0;j<5;j++)
    {
        scanf("%d",&array[j]);
    }
    for(i=0;i<j;i++)
    {
        m*=array[i];
    }
    printf("the product is %d",m);
    return 0;
}
