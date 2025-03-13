#include <stdio.h>
#include <stdlib.h> // provides malloc() and free()
#include <string.h>

enum nodeType{ANINAL, QUESTION};
ty

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int d) {
    struct Node* newNode =
      (struct Node*)malloc(sizeof(struct Node));
    newNode->data = d;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


int main() {
// asks user to think of an animal
char animalGuess;
printf("Type in an animal\n"); 
scanf("%c", &animalGuess); // animal guess is Elephant
printf ("Thanks for telling me about the %c\n", animalGuess);

char animalGuess;
printf("Think of an animal and then press enter to continue\n");
// search for animal in tree - asks if it is the only animal in the tree
printf


scanf("%c", &animalGuess); // animal guess is Elephant
printf ("Thanks for telling me about the %c\n", animalGuess);

// creates a loop to keeping asking to think of an animal 
while (animalGuess != 'E') {
    printf("Is it an xxxxxx\n");
    scanf("%c", &animalGuess);
    // search for animal in tree
    if (animalGuess )
    
}

//if animal has been mentioned, ask if it has x characteristic


//if animal has not been mentioned, ask for the name of the animal and a question that distinguishes it from the animal guessed


}



