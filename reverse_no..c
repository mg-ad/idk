#include <stdio.h>

int main(){
    int a=78901,i;
    for(i=0;i<5;i++){
        printf("%d",a%10);
        a/=10;
        printf("\n");
    }
    
    return 0;
}
