#include <stdio.h>
#include <string.h> // this includes string processing functions 
#include <ctype.h> // this includes character processing functions


void condition (char *in, char *out) {
}

int main () { // defines main function that returns void

char inputBuffer [200]; // array of characters with 200 elements

inputBuffer[0] = 'X';        // so we will do the loop at least once

while (inputBuffer[0] != '\n') {

printf ("Enter a string"); // print "Enter a string: " onto the console
fgets(inputBuffer, 200, stdin); // read one line from the console into inputBuffer

if (inputBuffer[0] != '\n') {

int len = strlen(inputBuffer); // get the length of the inputBuffer
if (inputBuffer[len - 1] == '\n'){
inputBuffer[len - 1] = '\0'; // replace the newline character with the null character
printf("%d\n", len - 1); // print the length of the inputBuffer
}
else {  
printf("%d\n", len); // print the length of the inputBuffer
}

// printf("%s", inputBuffer); // print inputBuffer onto the console

}

}

}