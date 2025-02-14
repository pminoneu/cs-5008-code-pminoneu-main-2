#include <stdio.h>
#include <string.h> // this includes string processing functions
#include <stdlib.h> // this includes standard library functions

void killNewline (char *str) 
{ // function to clean new line in file name 
    int len = strlen(str);
    if (len >= 1 && str[len - 1] == '\n')
    {
    str[len - 1] = '\0';
}
}

int main()
{
    char filename[100];   
    printf("Type the file name: "); // gets the file name
    fgets(filename, 100, stdin);
    killNewline(filename);
    FILE *inFile = fopen (filename, "r");
    
    if (inFile == NULL) 
    {
    printf("Error handling file."); // something went wrong, print an error message
    }
    else 
    {
    int keepReading = 1;
    while (keepReading) {
    char *whatWasRead = fgets (filename, 1000, inFile);
    keepReading = (whatWasRead != NULL);

    if (keepReading) 
    {
    killNewline(whatWasRead);
    char myBuffer[1000];
    strcpy(myBuffer, whatWasRead);
    char *token = strtok(myBuffer, ",");
    while (token != NULL) 
    {
        printf("<%s>\n", token);
        token = strtok(NULL, ",");
    }
    }

    }
    fclose(inFile);
    }
    
    

    fclose(inFile);

    return 0;
}