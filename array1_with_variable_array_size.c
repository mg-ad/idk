#include <stdio.h>

int main() {
    
    int j,i,m=1;
    scanf("%d",&i);
    int array[i]
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
