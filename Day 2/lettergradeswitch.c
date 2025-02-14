// Takes a number from 1-10 and prints the corresponding letter grade
#include <stdio.h>

int main() {
   int Grade;

    printf("Enter your grade in number: ");
    scanf("%d", &Grade);

switch (Grade) {
case 1:
case 2:
case 3:
    printf("Your grade is F\n"); 
    break;

case 4:
case 5:
    printf("Your grade is E\n");
    break;

case 6:
    printf("Your grade is D\n");
    break;

case 7:
    printf("Your grade is C\n");
    break;   

case 8:
    printf("Your grade is B\n");
    break;  

 case 9:
 case 10:
    printf("Your grade is A\n");
    break;     

default:
      printf("Invalid number. Please type a number between 1 and 10\n"); // Error message in case number is not between 1 and 10
      break;
      
}

   return 0;
}