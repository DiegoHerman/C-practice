#include <stdio.h>

int main() {
    int total_purchase_amount;
    const int amount_threshold=10000;
    const int purchaseamount_threshold=5000;
    int age;
    const int age_threshold=70;
    const int female_age_threshold=50;
    char gender;

    printf("Total purchase amount: ");
    scanf("%d",&total_purchase_amount);
    printf("Age of the shopper: ");
    scanf("%d",&age);
    printf("Gender of the shopper: ");
    scanf(" %c",&gender);

    int valid_amount=((total_purchase_amount>=amount_threshold)||((age>=age_threshold)&&(total_purchase_amount>=purchaseamount_threshold))||(gender='F'&&age>=female_age_threshold));
    printf(valid_amount?"Discount granted":"Discount denied");
    return 0;
}