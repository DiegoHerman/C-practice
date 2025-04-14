#include <stdio.h>
#include <stdlib.h>

const char* array_fix(int day) {
     if(day>=11&&day<=13) {
     return "th";
     }

     switch(day%10) {
          case 1: return "st";
          case 2: return "nd";
          case 3: return "rd";
          default: return "th";
     }
}

int main() {
int day, month, year;
;
printf("Please put the day, month and year respectively: ");
scanf("%d %d %d",&day,&month,&year);
const char *months[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November","December"};
if(day<1||day>31) {
     printf("invalid date\n");
     return 1;
}
if (month<1||month>12) {
     printf("invalid month\n");
     return 1;
}
printf("%d%s %s %d",day,array_fix(day),months[month-1],year);

return 0;
}