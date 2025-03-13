#include <stdio.h>  
#include <stdbool.h>

int main(){
    int x;
    x= 123; 
    int y;
    y= 456;

    int age = 21;
    float gpa = 4.0; // floating point number, 
    char grade = 'A'; // character
    char name[20] = "John Doe"; // string - an array of characters 
    
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);

    // % is a format specifier
    // d is for decimal, float is %f, char is %c and string is %s

    //boolean uses 1 or 0 - use %d
    bool a = true;
    printf("%d", a);
}