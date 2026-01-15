#include <stdio.h>
#include <string.h>

int main() {
    // variables to store user input
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    // scanf read input ans i assign it to the variable
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    // space before %c clears buffer
    printf("Enter your grade: ");
    scanf(" %c", &grade);

    // getchar() clears newline from buffer
    // fgets reads string input 
    // removes newline character from end of string
    getchar();
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    
    // output the user's name, age, gpa and grade
    printf("\nHello %s your age is %d\n", name, age);
    printf("your gpa is %.2f And your grade is %c\n", gpa,grade);

    return 0;
}