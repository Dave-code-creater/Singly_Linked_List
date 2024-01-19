/*
  Description: Library implementation for utility functions related to singly linked list data structure.
  Author: Tan Dat Ta
  Version: 2.0
  License: GNU
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>
#include "sll.h"  // Include the custom header file

// Function to get the number of nodes from the user
int LengthInput() {
    printf("Input the length of the linked list: ");
    return GetNumber();
}

// Function to get a positive integer from the user

int GetNumber() {
    int number;
    do {
        scanf("%d", &number);
        while (getchar() != '\n');
    } while (number <= 0);
    return number;
}

// Function to get the current time as a string
const char *GetTime() {
    struct tm *ptr;
    time_t t;
    t = time(NULL);
    ptr = localtime(&t);
    return asctime(ptr);
}

// Write all the answers of executing all the functions into a file named "sll.txt" separated by an enter character
void WriteLog(Node *head) {
    FILE *fptr;
    fptr = fopen("sll.txt", "a");
    if (fptr == NULL) {
        perror("Error opening file");
        exit(1);
    }
    Node *tmp = head;
    fprintf(fptr, "\n\nThe time of executing the program: %s", GetTime());
    fprintf(fptr, "\nThe Linked List: ");
    while (tmp != NULL) {
        fprintf(fptr, "%d ---- >", tmp->value);
        tmp = tmp->next;
    }
    fprintf(fptr, "\n");
    fprintf(fptr, "The Length of the Linked List: %d\n", Length(head));
    fprintf(fptr, "Is the Linked List empty: %s\n", IsEmpty(head));
    fclose(fptr);
    printf("Successfully wrote to file\n");
}
