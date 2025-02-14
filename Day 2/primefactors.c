// Asks the user for a number and prints the prime factorization of that number
#include <stdio.h>

int main (){
int number;
int primefactor;

printf("Enter a number: ");
scanf("%d", &number);

while (number > 1){
    for (int i = 2; i <= number; i++){
        if (number % i == 0){
            primefactor = i;
            number = number / i;
            printf("%d ", primefactor);
            break;
        }
    }
}







}
