#include <stdio.h>
#include <string.h>

int main() {
int i,j,k;
int row1,row2,column1,column2;

printf("Enter number of rows for mat1: ");
scanf("%d",&row1);
printf("Enter number of columns for mat1: ");
scanf("%d",&column1);
float mat1[row1][column1];
printf("Enter number of rows for mat2: ");
scanf("%d",&row2);
printf("Enter number of columns for mat2: ");
scanf("%d",&column2);
float mat2[row2][column2];
for(i=0;i<row1;i++) {
   for(j=0;j<column1;j++) {
      printf("Enter value for mat1 %d %d:",i,j);
      scanf("%g",&mat1[i][j]);
   }
}

for(i=0;i<row2;i++) {
   for(j=0;j<column2;j++) {
      printf("Enter value for mat2 %d %d:",i,j);
      scanf("%g",&mat2[i][j]);
   }
}
printf("Value for matrix 1\n");
for(i=0;i<row1;i++) {
   for(j=0;j<column1;j++) {
      printf("%g ",mat1[i][j]);
   }
   printf("\n");
}
printf("Value for matrix 2\n");
for(i=0;i<row2;i++) {
   for(j=0;j<column2;j++) {
      printf("%g ",mat2[i][j]);
   }
   printf("\n");
}
float matval[row1][column2];
if(column1==row2) {
   for(i=0;i<row1;i++) {
      for(j=0;j<column2;j++) {
         matval[i][j]=0;
         for(k=0;k<column1;k++) {
            matval[i][j]+=mat1[i][k]*mat2[k][j];
         }
      }
   }
printf("\nResulting matrix after multiplication\n");
printf("+");
      for(j=0;j<column2;j++) {
         printf("----");
      }
      printf("+\n");
 for(i=0;i<row1;i++) {
   printf("|");
      for(j=0;j<column2;j++) {
         printf("%g|",matval[i][j]);
      }
      printf("\n");
   
   printf("+");
      for(j=0;j<column2;j++) {
         printf("----");
      }
      printf("+\n");
}
} else {
   printf("\nMultiplication of matrix is not possible\n");
}
return 0;
}