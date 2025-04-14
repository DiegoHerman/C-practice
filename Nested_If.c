#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

int main() {
    int x,y,z;
    printf("Please input the three numbers: ");
    scanf("%d %d %d",&x,&y,&z);

    if (x>y) {
        if (x>z) {
            printf("largest no is:%d",x);
        }
        else {
            printf("largest no is:%d",z);
        }
     } else {
        if (y>z) {
            printf("largest no is:%d",y);
        }
        else {
            printf("largest no is:%d",z);
        }
    }
    
    
    return 0;
}








