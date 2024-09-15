#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode {
    char *data;
    struct DataNode *next;
} DataNode;

typedef struct SinglyLinkedList {
    unsigned int count;
    DataNode* head;
} SinglyLinkedList;

// Function prototypes
DataNode* createDataNode(char* data);
SinglyLinkedList* createSinglyLinkedList();
void traverse(SinglyLinkedList* list);
void insert_last(SinglyLinkedList* list, char* data);
void insert_front(SinglyLinkedList* list, char* data);
void delete(SinglyLinkedList* list, char* data);

// Create a new DataNode
DataNode* createDataNode(char* data) {
    DataNode* newNode = (DataNode*)malloc(sizeof(DataNode));
    newNode->data = (char*)malloc(strlen(data) + 1);
    strcpy(newNode->data, data);
    newNode->next = NULL;
    return newNode;
}

// Create a new SinglyLinkedList
SinglyLinkedList* createSinglyLinkedList() {
    SinglyLinkedList* newList = (SinglyLinkedList*)malloc(sizeof(SinglyLinkedList));
    newList->count = 0;
    newList->head = NULL;
    return newList;
}

// Traverse the list and print data
void traverse(SinglyLinkedList* list) {
    if (list->count == 0) {
        printf("This is an empty list.\n");
        return;
    }
    DataNode* pointer = list->head;
    while (pointer != NULL) {
        if (pointer->next != NULL) {
            printf("%s -> ", pointer->data);
        } else {
            printf("%s\n", pointer->data);
        }
        pointer = pointer->next;
    }
}

// Insert a new node at the end of the list
void insert_last(SinglyLinkedList* list, char* data) {
    DataNode* pNew = createDataNode(data);
    if (list->count == 0) {
        list->head = pNew;
    } else {
        DataNode* current = list->head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = pNew;
    }
    list->count++;
}

// Insert a new node at the front of the list
void insert_front(SinglyLinkedList* list, char* data) {
    DataNode* pNew = createDataNode(data);
    if (list->count == 0) {
        list->head = pNew;
    } else {
        pNew->next = list->head;
        list->head = pNew;
    }
    list->count++;
}

// Delete a node from the list
void delete(SinglyLinkedList* list, char* data) {
    if (list->count == 0) {
        printf("Cannot delete, %s does not exist.\n", data);
        return;
    }

    DataNode *current = list->head;
    DataNode *previous = NULL;

    // Check if the head node contains the data
    if (strcmp(current->data, data) == 0) {
        list->head = current->next; // Move head to the next node
        free(current->data); // Free the data
        free(current); // Free the node
        list->count--;
        return;
    }

    // Traverse the list to find the node to delete
    while (current != NULL && strcmp(current->data, data) != 0) {
        previous = current;
        current = current->next;
    }

    // If the node with the data was not found
    if (current == NULL) {
        printf("Cannot delete, %s does not exist.\n", data);
        return;
    }

    // Delete the node
    previous->next = current->next; // Bypass the node to delete it
    free(current->data); // Free the data
    free(current); // Free the node
    list->count--;
}

int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    char condition;
    char data[100]; // Assuming a maximum string length of 99 characters
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data); // Read condition and string data

        if (condition == 'F') {
            insert_front(mylist, data);
        } else if (condition == 'L') {
            insert_last(mylist, data);
        } else if (condition == 'D') {
            delete(mylist, data);
        } else {
            printf("Invalid Condition!\n");
        }
    }

    traverse(mylist);

    // Free allocated memory for each node's data
    DataNode* current = mylist->head;
    while (current != NULL) {
        DataNode* temp = current;
        current = current->next;
        free(temp->data); // Free the data
        free(temp);       // Free the node
    }
    free(mylist); // Free the list itself
    return 0;
}