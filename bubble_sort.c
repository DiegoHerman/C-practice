#include <stdio.h>
#include <stdlib.h>
//#define ARR_SIZE 20
int main() {
int size=0,i,j,temp,sorted=0,input;

int* arr=(int *)malloc(sizeof(int)*20);
if(arr==NULL){
    printf("Memory allocation failed!");
    return 1;
}

 printf("Please enter the numbers:Press -1 to break ");
while(1) {
    scanf("%d",&input);
    if(input==-1){
        break;
    }
    arr[size++]=input;
}
for(i=0;i<size-1&&sorted==0;i++) {
    sorted=1;
    for(j=0;j<(size-i)-1;j++) {
        if(arr[j]>arr[j+1]) {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr [j+1]=temp;
            sorted=0;
        }
    }
}
printf("The elements in ascending order are: ");
for(i=0;i<size;i++) {
    printf("%d ",arr[i]);
}
    return 0;
}