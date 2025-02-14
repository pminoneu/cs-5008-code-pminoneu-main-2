#include <stdio.h>


int main() {
    char s[100];                        
    char t[100];       

   
    printf("Enter your name: ");                
    scanf("%s", s);
    fgets(t, 100, stdin);                       // changed from s to t, as t will be the temporary buffer to store newline character by scanf
    printf("%s? That's a funny name!", s);     
    return 0;                                   // tells the operating system that the program ran as expected
    getchar();                                  // waits for the enter key to close terminal


}