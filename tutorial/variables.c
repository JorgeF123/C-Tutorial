#include <stdio.h>
#include <stdbool.h>

int main() {

    // variable = A reusable container for a value.
    //          Behaves as if it were the value it contains.

    // int = Whole numbers (4 bytes in modern systems)
    int age = 23;
    int year = 2026;
    int quantity = 1;

    // float = single-precision decimal number (4 bytes)
    float gpa = 2.5;
    float price = 19.99;
    float temp = -10.1;

    // double = double-precision decimal number (8 bytes)
    double pi = 3.14159265359;
    double e = 2.7182818284590;

    // char = single character (1 byte)
    char grade = 'A';
    char symbol = '^';
    char currency = '$';

    // char[] = array of characters (size varies)
    char name[] = "MrBingBong";
    char food[] = "pizza";
    char email[] = "fakeEmail9110@gmail.com";

    // bool = true or false (1 byte, requires ‹stdbool.h>)
    bool isOnline = true;

    printf("your %d years old.\n",age);
    printf("the year is %d.\n",year);
    printf("we have %d in stock\n",quantity);

    printf("my gpa is %.1f.\n",gpa);
    printf("The Price is %.2f.\n",price);
    printf("The temperature is %.1f°F\n",temp);

    printf("the vale of pi is %.11lf\n",pi);
    printf("the vale of e is %.13lf\n",e);

    printf("your grade is an %c\n",grade);
    printf("look at this symbol %c\n",symbol);
    printf("The currency is %c\n",currency);

    printf("hello my name is %s\n",name);
    printf("my favorite food is %s\n",food);
    printf("my email is %s\n",email);

    // if isOnline is true %d returns 1 else returns 0.
    printf("%d\n",isOnline);

    if(isOnline){
        printf("user is online\n");
    } else {
        printf("user is offline\n");
    }

    return 0;

}
