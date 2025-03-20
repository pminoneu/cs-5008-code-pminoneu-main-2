#include <stdio.h>
#include <stdlib.h> // provides malloc() and free()
#include <string.h>

// creates a struct to hold city data
typedef struct 
{
    char name[100];   // city name
    char state[3];   // state abbreviation 
    double latitude;  // latitude of the city
    double longitude;  // longitude of the city
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


//creates function to read cities from file 
void loadCities(sNode **head, char *filename, int numCities) 
{
FILE *file = fopen("uscities.csv", "r");

char line[1000];  // Buffer to hold each line of the CSV file
    int count = 0;
    fgets(line, sizeof(line), file); // Skip the first line (header)

    while (fgets(line, sizeof(line), file) && count < numCities) {
        cityData *city = (cityData*)malloc(sizeof(cityData));
        int parsed = sscanf(line, "\"%99[^\"]\",\"%*99[^\"]\",\"%2[^\"]\",\"%*99[^\"]\",\"%*99[^\"]\",\"%*99[^\"]\",\"%lf\",\"%lf\",\"%d\"", 
    city->name, city->state, &city->latitude, &city->longitude, &city->population);

        if (parsed != 5) {
            free(city);
            continue;
         
        }
        insertEnd(head, city);
        count++;
    }
}

// creates bstNode struct
typedef struct bstNode {
    cityData *city;          // Pointer to city data (the city in this node)
    struct bstNode *left;    // Pointer to left child (smaller latitude)
    struct bstNode *right;   // Pointer to right child (larger latitude)
} bstNode;

// creates a function to insert a city into a binary search tree by latitude
bstNode* insertBST(bstNode *root, cityData *city) {
    if (root == NULL) {
        bstNode *newNode = (bstNode*)malloc(sizeof(bstNode));
        newNode->city = city;
        newNode->left = newNode->right = NULL;

        return newNode;
    }
    // Add logic to insert based on latitude or other criteria
    if (city->latitude < root->city->latitude) {
        root->left = insertBST(root->left, city);
    } else {
        root->right = insertBST(root->right, city);
    }
    return root;

    return root;
}

//includes cities in an array in order by latitude
void inOrder(bstNode *root, cityData *cities[], int *index) {
    if (root == NULL) {
        return;
    }
    inOrder(root->left, cities, index);
    cities[*index] = root->city;
    (*index)++;
    inOrder(root->right, cities, index);
}

// creates a function to insert a city into a binary search tree by longitude
bstNode* insertBSTLon(bstNode *root, cityData *city) {
    if (root == NULL) {
        bstNode *newNode = (bstNode*)malloc(sizeof(bstNode));
        newNode->city = city;
        newNode->left = newNode->right = NULL;

        return newNode;
    }
    // Add logic to insert based on longitude or other criteria
    if (city->longitude < root->city->longitude) {
        root->left = insertBST(root->left, city);
    } else {
        root->right = insertBST(root->right, city);
    }
    return root;

    return root;
}

//includes cities in an array in order by latitude
void inOrderLon(bstNode *root, cityData *cities[], int *index) {
    if (root == NULL) {
        return;
    }
    inOrder(root->left, cities, index);
    cities[*index] = root->city;
    (*index)++;
    inOrder(root->right, cities, index);
}


// creates a function that finds index of New York City in the array of cities
int findNYC(cityData *cities[], int size) {   
    for (int i = 0; i < size; i++) {
        if (strcmp(cities[i]->name, "New York") == 0 && strcmp(cities[i]->state, "NY") == 0) {
            return i;
        }
    }
    return -1;
}

void inOrder(bstNode *root, cityData *cities[], int *index);

// M A I N  F U N C T I O N

int main () {
 //asks user for number of cities   
int numCities;
printf("Enter a number: ");
scanf("%d", &numCities);

//prints
    sNode *head = NULL; // creates an empty list
    loadCities(&head, "uscities.csv", numCities);
    // Debug: Check if the list is empty
    if (head == NULL) {
        printf("Error: No cities loaded.\n");
        return 1;
    }
// Print the loaded cities
sNode *current = head;
int count = 0;
while (current != NULL && count < numCities) {
    cityData *city = (cityData*)current->data;
    printf("City: %s, State: %s, Population: %d, at (%fl, %fl)\n", city->name, city->state, city->population, city->latitude, city->longitude);
    current = current->next;
    count++;

    }

//prints the index of new york city in the array of cities by 
    bstNode *root = NULL;
    current = head;
    while (current != NULL) {
        cityData *city = (cityData*)current->data;
        root = insertBST(root, city);
        current = current->next;
    }
    cityData *cities[numCities];
    int index = 0;
    inOrder(root, cities, &index);
    int nycIndex = findNYC(cities, index);
    
        printf("By latitude, New York City is at index %d.\n", nycIndex);
    

//prints the index of new york city in the array of cities by longitude
    bstNode *rootLon = NULL;
    current = head;
    while (current != NULL) {
        cityData *city = (cityData*)current->data;
        rootLon = insertBSTLon(rootLon, city);
        current = current->next;
    }
    cityData *citiesLon[numCities];
    int indexLon = 0;
    inOrderLon(rootLon, citiesLon, &indexLon);
    int nycIndexLon = findNYC(citiesLon, indexLon);
    
        printf("By longitude, New York City is at index %d.\n", nycIndexLon);
    
    return 0;
}