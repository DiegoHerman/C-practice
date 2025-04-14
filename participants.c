#include <stdio.h>
#include <string.h>

int main() {
    int total=0;
    char str[20];
    printf("Please input name of participant: ");
    scanf(" %s",str);
    int count=1;
    while((strcmp(str,"quit")!=0)&&(strcmp(str,"Quit")!=0)&&(strcmp(str,"QUIT")!=0)) {
        printf("Person #%d is %s",count,str);
        count++;
        total++;
        printf("\nPlease put other participants:(Put Quit to exit) ");
        scanf(" %s",str);
    }
    printf("Total participants are %d",total);
    return 0;
}