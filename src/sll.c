#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>
#include <time.h>
#include "sll.h"  // Include the custom header file

// Function to create a new node with a given 'value'
Node *Create_Node(int value)
{
    Node *tmp = (Node *)malloc(sizeof(Node));

    // Validate the memory allocation
    if (tmp == NULL)
    {
        printf("%s\n", strerror(errno));
        return NULL;
    }

    tmp->value = value;
    tmp->next = NULL;

    return tmp; // Return the newly created node
}

// Function to create a singly linked list with 'length' nodes
Node *Creating_Sll(int length)
{
    printf("Creating your own Singly Linked List\n");

    // Initialize the head of the linked list to NULL
    Node *head = NULL;

    // Check if the input length is valid
    if (length <= 0)
    {
        printf("The length must be greater than 0");
        return NULL;
    }
    
    printf("Initialize your linked list\n");

    // Loop to create 'length' nodes in the linked list
    for (int i = 0; i < length; i++)
    {
        // Allocate memory for a new node
        Node *Current = Create_Node(0); // Initialize value to 0

        if (Current != NULL)
        {
            printf("Input the value at %d index: ", i + 1);
            Current->value = Get_Number(); // Get the value from the user

            // If the list is empty, set head to the current node
            if (head == NULL)
            {
                head = Current;
            }
            else
            {
                // Assign a temporary pointer as 'head' and traverse to the end of the list
                Node *tmp = head;
                while (tmp->next != NULL)
                {
                    tmp = tmp->next;
                }
                // Add the current node to the end of the list
                tmp->next = Current;
            }
        }
    }
    return head; // Return the head of the linked list
}

// Function to free the memory of a singly linked list
void Free_sll(Node *head)
{
    while (head != NULL)
    {
        Node *tmp = head;
        head = head->next;
        free(tmp); // Free each node in the list
    }
}

// Function to print the elements of a singly linked list
void Printing_Sll(Node *head)
{
    Node *tmp = head;
    printf("\nList Elements: \n");
    while (tmp != NULL)
    {
        printf("%d ------> ", tmp->value);
        tmp = tmp->next;
    }
    printf("NULL\n");
}

// Function to calculate the length of a singly linked list
int Length(Node *head)
{
    int number_of_node = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        number_of_node++;
    }
    return number_of_node;
}

// Function to print the elements of a singly linked list in reverse order
void Priting_Inverse_Sll(Node *head)
{
    Node *tmp = head;
    int length = Length(head);
    printf("The Linked List in reverse order: \n");

    for (int k = 0; k < length; k++)
    {
        for (int i = length - 1; i > 0; i--)
        {
            tmp = tmp->next;
        }

        printf("%d ----> ", tmp->value);
        tmp = head;
        length--;
    }
    printf("NULL\n");
}

// Function to insert a node at the head of the linked list
extern Node *Insert_At_Head(Node *head, Node *tmp)
{
    if (tmp != NULL)
    {
        tmp->next = head;
    }
    return tmp;
}

// Function to insert a node at a specified position in the linked list
extern void Insert_At_Middle(Node *head, Node *tmp, int position)
{
    Node *Current = head;
    for (int i = 0; i < position - 1; i++)
    {
        Current = Current->next;
    }
    tmp->next = Current->next;
    Current->next = tmp;
}

// Function to insert a node at the tail of the linked list
void Insert_At_Tail(Node *head, Node *tmp)
{
    if (tmp != NULL)
    {
        if (Is_Empty(head) == "true")
        {
            head = tmp;
        }
        else
        {
            Node *current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = tmp;
        }
    }
}

extern Node* Sort_ASC(Node* head)
{
    Node* tmp = head;
    int Current = tmp->value;
    int length = Length(head);
    for (int i = 0 ; i < length; i++)
    {
        for (int k = 1; k < length - i - 1; k++)
        {
            if (tmp->value > tmp->next->value)
            {
                Current = tmp->next->value;
                tmp->next->value = tmp->value;
                tmp->value = Current;
            }
            tmp = tmp->next;
        }
        tmp = head;
    }
    return head;
}

extern Node* Sort_DESC(Node *head)
{
    Node* tmp = head;
    int Current = tmp->value;
    int length = Length(head);
    for (int i = 0 ; i < length; i++)
    {
        for (int k = 1; k < length ; k++)
        {
            if (tmp->value < tmp->next->value)
            {
                Current = tmp->next->value;
                tmp->next->value = tmp->value;
                tmp->value = Current;
            }
        }
    }
    return head;
}

// Function to check if the linked list is empty
extern char *Is_Empty(Node *head)
{
    if (head == NULL)
    {
        return "true";
    }
    else
    {
        return "false";
    }
}

// Function to get the number of nodes from the user
extern int Length_Input()
{
    printf("Input the length of the linked list: ");
    int length = Get_Number();
    return length;
}

// Function to get a positive integer from the user
extern int Get_Number()
{
    int number;
    do
    {
        scanf("%d", &number);
        while (getchar() != '\n')
            ;
    } while (number <= 0);
    return number;
}

// Function to get the current time as a string
extern const char *Get_Time()
{
    struct tm *ptr;
    time_t t;
    t = time(NULL);
    ptr = localtime(&t);
    return asctime(ptr);
}

// Write all the answer of executing all the functions into a file named "sll.txt" differ by enter character
extern void Write_Log(Node *head)
{
    FILE *fptr;
    fptr = fopen("sll.txt", "a");

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    Node *tmp = head;

    fprintf(fptr, "\n\nThe time of executing the program: %s", Get_Time());
    fprintf(fptr, "\nThe Linked List: ");
    while (tmp != NULL)
    {
        fprintf(fptr, "%d ---- >", tmp->value);
        tmp = tmp->next;
    }

    fprintf(fptr, "\n");

    fprintf(fptr, "The Length of the Linked List: %d\n", Length(head));
    fprintf(fptr, "Is the Linked List empty: %s\n", Is_Empty(head));

    fclose(fptr);
    printf("Successfully write to file\n");
}