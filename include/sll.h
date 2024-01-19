#ifndef MY_HEADER_H__
#define MY_HEADER_H__

// Define boolean data type
#ifndef bool
#define bool int
#endif

#ifndef true
#define true 1
#endif

#ifndef false
#define false 0
#endif

// Define the datatype
typedef struct Node {
    // Any type of value
    int value;
    struct Node* next;
} Node;

// Function prototypes

/**
 * @brief Creates a new node with a given value.
 * 
 * @param value The value to be assigned to the new node.
 * @return Node* A pointer to the newly created node.
 */
Node* CreateNode(int value);

/**
 * @brief Creates a singly linked list with a specified number of nodes.
 * 
 * @param length The number of nodes to be created in the linked list.
 * @return Node* A pointer to the head of the linked list.
 */
Node* CreateSll(int length);

/**
 * @brief Prints the elements of a singly linked list.
 * 
 * @param head The head of the linked list.
 */
void PrintSll(Node* head);

/**
 * @brief Calculates the length of a singly linked list.
 * 
 * @param head The head of the linked list.
 * @return int The length of the linked list.
 */
int LengthInput();

/**
 * @brief Prints the elements of a singly linked list in reverse order.
 * 
 * @param head The head of the linked list.
 */
void PrintInverseSll(Node* head);

/**
 * @brief Inserts a node at the head of the linked list.
 * 
 * @param head The head of the linked list.
 * @param tmp The node to be inserted.
 * @return Node* A pointer to the new head of the linked list.
 */
Node* InsertAtHead(Node* head, Node* tmp);

/**
 * @brief Inserts a node at a specified position in the linked list.
 * 
 * @param head The head of the linked list.
 * @param tmp The node to be inserted.
 * @param position The position at which the node should be inserted.
 */
void InsertAtMiddle(Node* head, Node* tmp, int position);

/**
 * @brief Inserts a node at the tail of the linked list.
 * 
 * @param head The head of the linked list.
 * @param tmp The node to be inserted.
 */
void InsertAtTail(Node* head, Node* tmp);

/**
 * @brief Sorts the elements of the linked list in ascending order.
 * 
 * @param head The head of the linked list.
 * @return Node* A pointer to the head of the sorted linked list.
 */
Node* SortAsc(Node* head);

/**
 * @brief Sorts the elements of the linked list in descending order.
 * 
 * @param head The head of the linked list.
 * @return Node* A pointer to the head of the sorted linked list.
 */
Node* SortDesc(Node* head);

/**
 * @brief Checks if the linked list is empty.
 * 
 * @param head The head of the linked list.
 * @return char* "true" if the linked list is empty, "false" otherwise.
 */
char* IsEmpty(Node* head);

/**
 * @brief Frees the memory of a singly linked list.
 * 
 * @param head The head of the linked list.
 */
void FreeSll(Node* head);

/**
 * @brief Deletes a node with the specified value from the linked list.
 *
 * @param head The head node of the linked list.
 * @param value The value to be deleted from the linked list.
 */
void DeleteNode(Node* head, int value);

/**
 * @brief Checks if the linked list is empty.
 * 
 * This function takes the head of a singly linked list as a parameter
 * and returns a string "true" if the linked list is empty, "false" otherwise.
 * 
 * @param head The head of the linked list.
 * @return char* "true" if the linked list is empty, "false" otherwise.
 */
char* IsEmpty(Node* head);

/**
 * @brief Frees the memory of a singly linked list.
 * 
 * This function deallocates the memory of all nodes in the provided singly linked list.
 * 
 * @param head The head of the linked list.
 */
void FreeSll(Node* head);

/**
 * @brief Deletes a node with the specified value from the linked list.
 *
 * This function takes the head of a singly linked list and a value to be deleted
 * from the linked list. It deletes the first occurrence of the specified value.
 *
 * @param head The head node of the linked list.
 * @param value The value to be deleted from the linked list.
 */
void DeleteNode(Node* head, int value);

/**
 * @brief Writes the execution log to a file.
 * 
 * This function writes information about the linked list, including the time of execution,
 * the linked list itself, its length, and whether it is empty, to a file named "sll.txt".
 * 
 * @param head The head of the linked list.
 */
void WriteLog(Node* head);

/**
 * @brief Reads a positive integer from the user.
 *
 * This function prompts the user to enter a positive integer and reads it from the standard input.
 * It ensures that the entered number is greater than zero before returning it.
 *
 * @return The positive integer entered by the user.
 */
 int GetNumber();

 int Length(Node* head);

#endif
