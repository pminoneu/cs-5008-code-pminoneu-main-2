#include <stdio.h>



int main() {

    int x;                       
    int y;
    int w;                       // added to store third input
    char s[100];                 

    printf("Enter a number: ");     
    scanf("%d", &x);                
    fgets(s,100,stdin);             
    printf("You entered %d\n", x);  

    printf("Enter a number: ");     
    scanf("%d", &y);                
    fgets(s,100,stdin);             
    printf("You entered %d\n", x);  

    printf("The sum of the two numbers is %d\n", x + y);  

    printf("Enter a number to multiply %d by ", x + y );     // asks for third input 
    scanf("%d", &w);                
    fgets(s,100,stdin);             
    printf("The number %d multiplied by %d is %d\n", x + y, w, (x + y)* w);  


    fgets(s,100,stdin);
}