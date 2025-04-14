#include<stdio.h>
#include<string.h>

struct players {
   char name[50];
   char club[50];
   int year;
};
int main() {
struct players f1={"Lionel Messi","Inter Miami",2022};
strcpy(f1.name,"Suarez");
struct players f2={"Neymar jr","Santos F.C",2025};
printf("%s %s %d\n",f1.name,f1.club,f1.year);
printf("%s %s %d\n",f2.name,f2.club,f2.year);
return 0;
}