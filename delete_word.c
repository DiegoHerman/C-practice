#include <stdio.h>
#include <string.h>

int main() {
    char s[100],t[50]="",w[50],d[50];
    int i=0,j;
    printf("Enter the sentence: ");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    printf("Enter the word to be deleted: ");
    scanf("%s",d);

while(s[i]!='\0') {
    j=0;
 while(s[i]!=' '&&s[i]!='\0') {
w[j++]=s[i++];
 }
 w[j]='\0';

 if(strcmp(w,d)!=0) {
    if(t[0]!='\0') {
        strcat(t," ");
    }
        strcat(t,w);
 }
    if(s[i]!='\0') {
        i++;
    }
 
}
 printf("The remaining sentence is: ");
 puts(t);

 return 0;
}