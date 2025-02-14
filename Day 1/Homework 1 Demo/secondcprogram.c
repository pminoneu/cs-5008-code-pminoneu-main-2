#include <stdio.h>
int main() {
    char s[100];        // buffer for getting rid of unwanted \ns in stdin and for pausing the console
    char firstName[100];        // the person's name
    char lastName[100];         // the person's last name

    printf ("What is your first name? ");
    scanf("%s", firstName);
    fgets(s,100,stdin);

    printf ("What is your last name? ");
    scanf("%s", lastName);
    fgets(s,100,stdin);

    printf("%s %s? That's a funny name!  In fact I'm surprised they let you be a %s\n",firstName, lastName, lastName);
    fgets(s,100,stdin);
}
