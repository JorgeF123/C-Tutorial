#include <stdio.h>
#include <string.h>

int main(){
    
    // variables to store shopping cart data
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    // get item name from user
    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    // get price from user
    printf("What is the price for each?: ");
    scanf("%f",&price);

    // get quantity from user
    printf("How many would you like?: ");
    scanf("%d",&quantity);

    // display what user bought
    printf("\nYou have bought: %d %s/s\n",quantity,item);

    // calculate total price
    total = price * quantity;
    printf("The total is: %c%.2f\n",currency,total);

    return 0;
}