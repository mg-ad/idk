#include <stdio.h>

int main(){
    int a,i;
    printf("type your no.");
    scanf("%d",&a);
    while(a>0){
        printf("%d",a%10);
        a/=10;
        printf("\n");
    }
    
    return 0;
}
