/* A First C Program - for Homework 1
 *
 * This code will start you off.  Modify it as instructed in Homework 1.
 * 
 * Put your name here: Paula Minozo
 * CS-5008 Spring 2025
 */

/* Standard Libraries */
#include <stdio.h>

/**** MAIN PROGRAM ****/

int main() {

    int x;                       // x will be the value entered by the user// 
    int y;
    char s[100];                 // s is used to "pause" the console so it doesn't exit too quickly

    /* Ask for a number and print it out */
    printf("Enter a number: ");     // prompt the user
    scanf("%d", &x);                // read a number from the console ("stdin")
    fgets(s,100,stdin);             // sadly, we have to remove the \n that scanf leaves in stdin
    printf("You entered %d\n", x);  // tell the user what number they just entered

    printf("Enter a number: ");     // prompt the user again
    scanf("%d", &y);                // read a number from the console ("stdin") and store it in y
    fgets(s,100,stdin);             // 
    printf("You entered %d\n", x);  // tell the user what number they just entered

    printf("The sum of the two numbers is %d\n", x + y);  // print the sum of the two numbers
    
    /* Normally I would not put a comment on every line of code.
       I just did it above because you are learning C for the first time.
       I would only put a comment on a line if it was hard to understand or required that you
       know something that is not entirely obvious by looking at the code.
    */

    /* Pause the console so we can look at it before it vanishes */
    fgets(s,100,stdin);
}