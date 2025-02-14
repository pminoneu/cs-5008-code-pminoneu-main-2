// Takes a number and calculates the area of a circle with that radius
#include <math.h> // Include the math library
#include <stdio.h>

int main() {
int area; // Store the area of the circle
int radius; // Store the radius of the circle

printf("Enter the radius of the circle: "); // Ask the user for the radius
scanf("%d", &radius); // Scan for user input

double pi = acos(-1); // Define pi 
area = pi * (radius ^2); // Calculate the area of the circle

printf("The area of the circle is %d\n", area); // Print the area of the circle

}