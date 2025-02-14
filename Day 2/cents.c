// Takes a number and outputs how many quarters, dimes, nickels, and pennies are needed to make that amount
#include <stdio.h>

int main() {
    while (1) {
        int getCoins; // get coins is 67
        int QuartersNeeded;
        int remainder = 0;
        int DimesNeeded;
        int PenniesNeeded;
        int NicklesNeeded;

        printf("Enter a number of cents (or -1 to exit): ");
        scanf("%d", &getCoins);

        if (getCoins == -1) {
            break; // Exit the loop if the user enters -1
        }

        printf("That requires ");

        if (getCoins >= 25) { // Program starts here if getCoins is greater than or equal to 25
            QuartersNeeded = getCoins / 25; // 
            remainder = getCoins % 25; // 
            if (QuartersNeeded == 1) {
                printf("%d quarter", QuartersNeeded);
            } else if (QuartersNeeded > 1) {
                printf("%d quarters", QuartersNeeded);
            }
        } else {
            remainder = getCoins; // If getCoins is less than 25, remainder is equal to getCoins - so program can continue
        }

        if (remainder >= 10) {
            DimesNeeded = remainder / 10; // 
            remainder = remainder % 10; // 
            if (DimesNeeded == 1) {
                printf(" %d dime", DimesNeeded);
            } else if (DimesNeeded > 1) {
                printf(" %d dimes", DimesNeeded);
            }
        }

        if (remainder >= 5) {
            NicklesNeeded = remainder / 5; // 
            remainder = remainder % 5; // 
        
            if (NicklesNeeded == 1) {
                printf(" %d nickel", NicklesNeeded);
            } else if (NicklesNeeded > 1) {
                printf(" %d nickels", NicklesNeeded);
            }
        }
    
        if (remainder >= 1) {
            PenniesNeeded = remainder; // 
            if (QuartersNeeded > 0 || DimesNeeded > 0 || NicklesNeeded > 0); {
            printf(" and");
            if (PenniesNeeded >=1);{
        }
            if (PenniesNeeded == 1) {
                printf(" %d penny", PenniesNeeded);
            } else if (PenniesNeeded > 1) {
                printf(" %d pennies", PenniesNeeded);
            }
        }
    }

        printf(".\n");
    }

    return 0;
}