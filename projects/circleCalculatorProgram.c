#include <stdio.h>
#include <math.h>

int main(){

    // constant value for pi
    const double PI = 3.14159265358979323846;

    // variables to store circle calculations
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;

    // get radius from user
    printf("Enter the radius: ");
    scanf("%lf",&radius);

    // calculate and display area of circle
    area = PI * pow(radius,2);
    printf("Area: %.2lf\n",area);

    // calculate and display surface area of sphere
    surfaceArea = 4 * PI * pow(radius,2);
    printf("Surface Area: %.2lf\n",surfaceArea);

    // calculate and display volume of sphere
    volume = 4 * PI * pow(radius,3) / 3;
    printf("Volume: %.2lf\n",volume);

    return 0;
}