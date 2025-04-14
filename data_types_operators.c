#include <stdio.h>

int main() {
    int num=25;
    float fnum=7.5;
    char ch='A';

    float sum;
    sum=(num+fnum);
    float multiplication=(num*fnum);
    int modulus=(num%4);
    printf("Sum: %.1f \n",sum);
    printf("Multiplication: %.1f \n",multiplication);
    printf("Modulus: %d \n",modulus);
    num++;
    printf("Increment: %d \n",num);

   int result;
   result=(num>fnum);
   printf("%d \n",result);
   result=(num==25);
   printf("%d \n",result);
   result=(ch<'B');
   printf("%d \n",result);
   
    return 0;
}