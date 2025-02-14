// Takes number of hours worked and hourly rate and calculates the payment
#include <stdio.h>

int main() {

    float HourlyRate;       
    float HoursWorked;      
    int Payment;          
    float OverTime;

    do {
        printf("Enter number of hours worked: "); // Asks the user for an input
        scanf("%f", &HoursWorked); 

        printf("Enter the hourly rate: "); // Asks the user for a float type input - hourly rate 
        scanf("%f", &HourlyRate);

        if (HoursWorked <= 0 || HourlyRate <= 0) { // If the user inputs a negative number, the program will break
            break; 
        }

        if (HoursWorked <= 40) { 
            Payment = HourlyRate * HoursWorked; // Calculates payment if number of hours is <= 40
        } else { // Calculates the overtime payment if number of hours is > 40
            OverTime = HoursWorked - 40;
            OverTime = (OverTime * HourlyRate) * 1.5; 
            Payment = (HourlyRate * HoursWorked) + OverTime;
            Payment = (int)Payment; 
        }
       
        printf("You should be payed %d\n", Payment); 

    } while (HoursWorked > 0 && HourlyRate > 0); 

    return 0;
}