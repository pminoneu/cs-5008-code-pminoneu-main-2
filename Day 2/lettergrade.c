#include <stdio.h>

int main() {

    int Grade;
    char LetterGrade;

        printf("Enter your grade in number: ");
        scanf("%d", &Grade); 
        if (Grade >=1){
        if (Grade >= 9 && Grade <= 10) {
            LetterGrade = 'A';
        } else if (Grade >= 8 && Grade < 9) {
            LetterGrade = 'B';
        } else if (Grade >= 7 && Grade < 8) {
            LetterGrade = 'C';
        } else if (Grade >= 6 && Grade < 7) {
            LetterGrade = 'D';
        } else if (Grade >= 4 && Grade < 6) { 
            LetterGrade = 'E'; 
        } else if (Grade >= 1 && Grade < 4) { 
            LetterGrade = 'F'; 
        } 
        printf("Your grade is %c\n", LetterGrade); 
        }
    else {
    printf("Invalid number. Please type a number between 1 and 10\n"); 
    }

    return 0;
}