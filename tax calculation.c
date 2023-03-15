#include <stdio.h>

int main() {
    int salary;
    printf("Enter your salary:");
    scanf("%d",&salary);
    if (salary>500000)
     printf("Tax is %f",9440+((salary*33)/100.0));
     else if (180000<salary&& salary<= 500000)
     printf("Tax is %f",1440+((salary*16)/100.0));
     else
     printf("Tax is %f",((salary*8)/100.0));
    return 0;
}
