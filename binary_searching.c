#include <stdio.h>
#define ARR 10
int main() {
    int arr[ARR],i,j,temp,sorted=0,found=0,low=0,mid,high,key;
    
    for(i=0;i<ARR;i++) {
        printf("Please input the numbers: ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<ARR-1&&sorted==0;i++) {
        sorted=1;
        for(j=0;j<ARR-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                sorted=0;
            }
        }
    }
    printf("Enter the key to search: ");
    scanf("%d",&key);

       low=0;
       high=ARR-1;
    for(;high>=low;) {
        mid=low+(high-low)/2;
        if(key==arr[mid]) {
            printf("Key found at %d",mid);
            found=1;
            break;
        }
        else if(key<arr[mid]) {
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
if(found==0) {
    printf("Key not found!");
}
return 0;
}