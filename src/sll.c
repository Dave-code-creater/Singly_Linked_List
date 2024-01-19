/*
  Description: Library implementation for a singly linked list data structure.
  Author: Tan Dat Ta
  Version: 2.0
  License: GNU
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdbool.h>
#include <ctype.h>
#include "sll.h"  // Include the custom header file

// Function to create a new node with a given 'value'
Node* CreateNode(int value) {
    Node* tmp = (Node*)malloc(sizeof(Node));

    // Check for failed memory allocation
    if (tmp == NULL) {
        perror("Memory allocation error");
        return NULL;
    }

    tmp->value = value;
    tmp->next = NULL;

    return tmp; // Return the newly created node
}

// Function to create a singly linked list with 'length' nodes
Node* CreateSll(int length) {
    printf("Creating your own Singly Linked List\n");

    // Initialize the head of the linked list to NULL
    Node* head = NULL;

    // Check if the input length is valid
    if (length <= 0) {
        printf("The length must be greater than 0\n");
        return NULL;
    }

    printf("Initializing your linked list\n");

    // Loop to create 'length' nodes in the linked list
    for (int i = 0; i < length; i++) {
        // Allocate memory for a new node
        Node* current = CreateNode(0);  // Initialize value to 0

        // Check for failed memory allocation
        if (current == NULL) {
            printf("Failed to create node. Aborting...\n");

            // Free previously allocated memory
            FreeSll(head);
            return NULL;
        }

        printf("Input the value at index %d: ", i + 1);
        current->value = GetNumber();  // Get the value from the user

        // If the list is empty, set head to the current node
        if (head == NULL) {
            head = current;
        } else {
            // Assign a temporary pointer as 'head' and traverse to the end of the list
            Node* tmp = head;
            while (tmp->next != NULL) {
                tmp = tmp->next;
            }
            // Add the current node to the end of the list
            tmp->next = current;
        }
    }
    return head;  // Return the head of the linked list
}

// Function to print the elements of a singly linked list
void PrintSll(Node* head) {
    Node* tmp = head;
    printf("\nList Elements: \n");
    while (tmp != NULL) {
        printf("%d ------> ", tmp->value);
        tmp = tmp->next;
    }
    printf("NULL\n");
}

// Function to calculate the length of a singly linked list
int Length(Node* head) {
    int numberOfNodes = 0;
    Node* tmp = head;
    while (tmp != NULL) {
        tmp = tmp->next;
        numberOfNodes++;
    }
    return numberOfNodes;
}

// Function to print the elements of a singly linked list in reverse order
void PrintInverseSll(Node* head) {
    Node* tmp = head;
    int length = Length(head);
    printf("The Linked List in reverse order: \n");

    for (int k = 0; k < length; k++) {
        for (int i = length - 1; i > 0; i--) {
            tmp = tmp->next;
        }

        printf("%d ----> ", tmp->value);
        tmp = head;
        length--;
    }
    printf("NULL\n");
}

// Function to insert a node at the head of the linked list
Node* InsertAtHead(Node* head, Node* tmp) {
    if (tmp != NULL) {
        tmp->next = head;
    }
    return tmp;
}

// Function to insert a node at a specified position in the linked list
void InsertAtMiddle(Node* head, Node* tmp, int position) {
    Node* current = head;

    // Traverse to the node just before the desired position
    for (int i = 0; i < position - 1; i++) {
        current = current->next;
    }

    tmp->next = current->next;
    current->next = tmp;
}

// Function to insert a node at the tail of the linked list
void InsertAtTail(Node* head, Node* tmp) {
    if (tmp != NULL) {
        if (IsEmpty(head)) {
            head = tmp;
        } else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = tmp;
        }
    }
}

// Function to sort the linked list in ascending order
Node* SortAsc(Node* head) {
    Node* tmp = head;
    int current = tmp->value;
    int length = Length(head);

    for (int i = 0; i < length; i++) {
        for (int k = 1; k < length - i - 1; k++) {
            if (tmp->value > tmp->next->value) {
                current = tmp->next->value;
                tmp->next->value = tmp->value;
                tmp->value = current;
            }
            tmp = tmp->next;
        }
        tmp = head;
    }
    return head;
}

// Function to sort the linked list in descending order
Node* SortDesc(Node* head) {
    Node* tmp = head;
    int current = tmp->value;
    int length = Length(head);

    for (int i = 0; i < length; i++) {
        for (int k = 1; k < length; k++) {
            if (tmp->value < tmp->next->value) {
                current = tmp->next->value;
                tmp->next->value = tmp->value;
                tmp->value = current;
            }
        }
    }
    return head;
}

// Function to check if the linked list is empty
char* IsEmpty(Node* head) {
    return (head == NULL) ? "true" : "false";
}

// Function to free the memory of a singly linked list
void FreeSll(Node* head) {
    while (head != NULL) {
        Node* tmp = head;
        head = head->next;
        free(tmp);  // Free each node in the list
    }
}

// Function to delete a node based on its value
void DeleteNode(Node* head, int value) {
    Node* tmp = head;
    Node* current = head;
    int length = Length(head);
    int index = 0;

    // Find the index of the node with the specified value
    for (int i = 0; i < length; i++) {
        if (tmp->value == value) {
            index = i;
            break;
        }
        tmp = tmp->next;
    }

    // Traverse to the node just before the node to be deleted
    for (int i = 0; i < index - 1; i++) {
        current = current->next;
    }

    current->next = tmp->next;
    free(tmp);
}

