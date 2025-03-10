#include <stdio.h>
#include <stdlib.h> // provides malloc() and free()
#include <string.h>

// creates a struct to hold city data
typedef struct 
{
    char name[100];   // city name
    char state[3];   // state abbreviation 
    int population;  // population of the city
} cityData;

// creates a struct named sNode with two members: data and next
typedef struct singleNode 
{
    void *data; // pointer to any type of data 
    struct singleNode *next; // pointer to the next node
} sNode; // gives it a nickname

// creates a function insertEnd to insert a new node at the end of the list
void insertEnd(sNode **head, cityData *city) {
    sNode *newNode = (sNode*)malloc(sizeof(sNode)); // allocates memory for a new node
    newNode->data = city; // assigns the data to the new node
    newNode->next = NULL; // assigns the next pointer to NULL

    if (*head == NULL) { // if the list is empty
        *head = newNode; // the new node is the head
    } else {
        sNode *current; // declare current variable
        current = *head; // creates a pointer to the head
        while (current->next != NULL) { // loops until the end of the list
            current = current->next; // moves to the next node
        }
        current->next = newNode; // assigns the new node to the end of the list
    }

}

// creates a function insertFront to insert a new node at the beggining of the list
void insertFront(sNode **head, cityData *city) {
    sNode *newNode = (sNode*)malloc(sizeof(sNode)); // allocates memory for a new node
    newNode->data = city; // assigns the data to the new node
    newNode->next = *head; // assigns the next pointer to the head

    *head = newNode; // the new node is the head
}

// creates a function to print the list
void printList(sNode *head) {
    sNode *current = head; // creates a pointer to the head
    while (current != NULL) { // loops until the end of the list
        cityData *city = (cityData*)current->data; // assigns the data to a city
        printf("%s, %s, %d\n", city->name, city->state, city->population); // prints the city data
        current = current->next; // moves to the next node
    }
}

//creates function to read cities from file 
void loadCities(sNode **head, char *filename) 
{
FILE *file = fopen("uscities.csv", "r");

char line[1000];  // Buffer to hold each line of the CSV file
    int count = 0;
    fgets(line, sizeof(line), file); // Skip the first line (header)

    while (fgets(line, sizeof(line), file) && count < 20) {
        cityData *city = (cityData*)malloc(sizeof(cityData));
        printf("DEBUG: %s", line);

        sscanf(line, "\"%99[^\"]\",\"%99[^\"]\",\"%2[^\"]\",%*[^,],%*[^,],%*[^,],%*[^,],%*[^,],\"%d\"", 
       city->name, city->state, &city->population);

        insertEnd(head, city);
        count++;

    }
}
    
int main () {
//prints
    sNode *head = NULL; // creates an empty list
    loadCities(&head, "uscities.csv");
    printList(head);
    return 0;

}