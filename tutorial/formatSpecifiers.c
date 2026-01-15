#include <stdio.h>
int main(){
   
    //  Format specifier = Special tokens that begin with a % symbol,
    //                     followed by a character that specifies the data type 
    //                     and optional modifiers (width, precision, flags).
    //                     They control how data is displayed or interpreted.
    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "MrBingBong";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    // width format

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = -200;

    // right assign
    printf("\n%3d\n", num1);
    printf("%4d\n", num2);
    printf("%5d\n", num3);

    // left assign 
    printf("\n%-3d <---\n", num1);
    printf("%-3d <---\n", num2);
    printf("%-1d <---\n", num3);

    // leading zeros 
    printf("\n%03d\n", num1);
    printf("%04d\n", num2);
    printf("%05d\n", num3);

    // "+" gives the + symbol is num is positive
    printf("\n%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n", num4);

    // precision
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    // displays 6 digits after the decimal
    printf("\n%f\n",price1);
    printf("%f\n",price2);
    printf("%f\n",price3);

    // displays "%.2f" gives 2 digits after the decimal
    printf("\n%.2f\n",price1);
    printf("%.2f\n",price2);
    printf("%.2f\n",price3);

     // displays "%.1f" gives 1 digit after the decimal and rounds
    printf("\n%.1f\n",price1);
    printf("%.1f\n",price2);
    printf("%.1f\n",price3);

    // width precision flags

    printf("\n%+-8.2f<--\n",price1);
    printf("-->%+8.2f\n",price2);
    printf("%-8.1f<--\n",price3);
    
    return 0;
}