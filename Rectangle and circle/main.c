/* The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.

Author Majid Mujahid Hussain dated 5 December 2020*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    float area_of_rectangle, perimeter_of_rectangle, length, breadth, radius, circumference, area_of_circle;
    printf("\n area of rectangle = %.2f, perimeter of rectangle = %.2f, length = %.2f, breadth = %.2f, radius = %.2f, circumference = %.1f, area of circle = %.1f", area_of_rectangle, perimeter_of_rectangle, length, breadth, radius, circumference, area_of_circle);
    printf("\nPlease enter the length and breadth of the Rectangle \n");
    scanf("%f %f", &length, &breadth);
    printf("\n The entered length is %.2f and breadth is %.2f", length, breadth);

    //calculating the area of the rectangle
    area_of_rectangle = length * breadth;
    printf("\n The area of the rectangle of length %.1f and breadth %.1f is %.1f", length, breadth, area_of_rectangle);

    //calculating the perimeter of the rectangle.
    perimeter_of_rectangle = 2 * (length + breadth);
    printf("\n \n The perimeter of the rectangle of length %.1f and breadth %.1f is %.1f", length, breadth, perimeter_of_rectangle);

    printf("\nPlease enter the radius of the circle \n");
    scanf("%f", &radius);
    //calculating the circumference of the circle.
    circumference = 2 * 3.14 * radius;
    printf("\n The circumference of the circle of radius %.1f is %.1f", radius, circumference);

    // calculating the area of the circle.
    area_of_circle = 3.14 * radius * radius;
    printf("\n The area of the circle of radius %.1f is %.1f", radius, area_of_circle);
    return 0;
}
