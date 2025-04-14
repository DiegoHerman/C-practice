#include <stdio.h>

int main() {
 row_slot(Table* table, uint32_t row_num) {
void* cursor_value(Cursor* cursor) {
   uint32_t row_num = cursor->row_num;
   uint32_t page_num = row_num / ROWS_PER_PAGE;
   void* page = get_page(table->pager, page_num);
   void* page = get_page(cursor->table->pager, page_num);
   uint32_t row_offset = row_num % ROWS_PER_PAGE;
   uint32_t byte_offset = row_offset * ROW_SIZE;
   return page + byte_offset;
 }
}

typedef struct vehicle
{
    char name[100];
    int roll;
    int salary;
    char address[100];
    int join_year;
}record;

int main(void)
{
    int i , choice;
    FILE *fp1,*fp2;
    char oname[100];
    int record det;
    int recsize;
    char c;

    fp1 = fopen("record.dat" , "r+");
    if(fp1 == NULL)
    {
        fp1 = fopen("record.dat" , "w+");
        if(fp1 == NULL)
        {
            printf("error in opening file : \n");
            return -1;
        }
    }
    recsize = sizeof(det);

    fseek(fp1 , 0 ,SEEK_END);
    printf("Enter employee Name : ");
    scanf("%[^\n]" , det.name);
    printf("Enter roll number   : ");
    scanf("%d" , &det.roll);
    printf("Enter the salary    : ");
    scanf("%d" , &det.salary);
    scanf("%c" , &c);
    printf("Enter address   : ");
    scanf("%[^\n]" , det.address);
    printf("Enter joining year  : ");
    scanf("%d" , &det.join_year);
    fwrite(&det,recsize,1,fp1);
}