#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#define ARR_SIZE 10
int main() {
int a[5][5],s[5][5];
int i,j,value;

printf("Please insert the elements: \n");
for(i=0;i<3;i++) {
   for(j=0;j<3;j++) {
      scanf("%d",&value);
      a[i][j]=value;
   }
   printf("\n");
}
printf("Value before transposition:\n");
for(i=0;i<3;i++) {
   for(j=0;j<3;j++) {
      printf("\t%d",a[i][j]);
   }
   printf("\n");
}
for(i=0;i<3;i++) {
   for(j=0;j<3;j++) {
      s[i][j]=a[j][i];
   }
}
printf("Value after transposition:\n ");
for(i=0;i<3;i++) {
   for(j=0;j<3;j++) {
      printf("\t%d",s[i][j]);
   }
   printf("\n");
}
 return 0;
}