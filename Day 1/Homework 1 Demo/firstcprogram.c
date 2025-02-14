/* A First C Program - for Homework 1
 *
 * This code will start you off.  Modify it as instructed in Homework 1.
 * 
 * Put your name here: Professor Shafer
 * CS-5008 Spring 2025
 */

/* Standard Libraries */
#include <stdio.h>

/**** MAIN PROGRAM ****/

int main() {

    int x;                          // x will be the value entered by the user
    int y;
    char s[100];                    // s is used to "pause" the console so it doesn't exit too quickly

    /* Ask for a number and print it out */
    /*
    printf("Enter a number: ");     // prompt the user
    scanf("%d", &x);                // read a number from the console ("stdin")
    fgets(s,100,stdin);             // sadly, we have to remove the \n that scanf leaves in stdin
    printf("You entered %20.4d\n", x);  // tell the user what number they just entered
    */

   printf ("%f\n", 0.3);
   printf("%f\n", 0.1 + 0.1 + 0.1);

    /* Pause the console so we can look at it before it vanishes */
    fgets(s,100,stdin);
}