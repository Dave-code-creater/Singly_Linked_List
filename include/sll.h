#ifndef MY_HEADER_H__
#define MY_HEADER_H__

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
typedef struct Node
{
    // Any type of value
    int value;
    struct Node* next;
}Node;



// Functions executions


/**
 * @brief Creates a new node with a given value.
 * 
 * @param value The value to be assigned to the new node.
 * @return Node* A pointer to the newly created node.
 */
Node *Create_Node(int value);

/**
 * @brief Creates a singly linked list with a specified number of nodes.
 * 
 * @param length The number of nodes to be created in the linked list.
 * @return Node* A pointer to the head of the linked list.
 */
Node *Creating_Sll(int length);

/**
 * @brief Prints the elements of a singly linked list.
 * 
 * @param head The head of the linked list.
 */
void Printing_Sll(Node *head);

/**
 * @brief Calculates the length of a singly linked list.
 * 
 * @param head The head of the linked list.
 * @return int The length of the linked list.
 */
int Length(Node *head);

/**
 * @brief Prints the elements of a singly linked list in reverse order.
 * 
 * @param head The head of the linked list.
 */
void Priting_Inverse_Sll(Node *head);

/**
 * @brief Inserts a node at the head of the linked list.
 * 
 * @param head The head of the linked list.
 * @param tmp The node to be inserted.
 * @return Node* A pointer to the new head of the linked list.
 */
Node *Insert_At_Head(Node *head, Node *tmp);

/**
 * @brief Inserts a node at a specified position in the linked list.
 * 
 * @param head The head of the linked list.
 * @param tmp The node to be inserted.
 * @param position The position at which the node should be inserted.
 */
void Insert_At_Middle(Node *head, Node *tmp, int position);

/**
 * @brief Inserts a node at the tail of the linked list.
 * 
 * @param head The head of the linked list.
 * @param tmp The node to be inserted.
 */
void Insert_At_Tail(Node *head, Node *tmp);

/**
 * @brief Sorts the elements of the linked list in ascending order.
 * 
 * @param head The head of the linked list.
 * @return Node* A pointer to the head of the sorted linked list.
 */
Node* Sort_ASC(Node* head);

/**
 * @brief Sorts the elements of the linked list in descending order.
 * 
 * @param head The head of the linked list.
 * @return Node* A pointer to the head of the sorted linked list.
 */
Node* Sort_DESC(Node *head);

/**
 * @brief Checks if the linked list is empty.
 * 
 * @param head The head of the linked list.
 * @return char* "true" if the linked list is empty, "false" otherwise.
 */
char *Is_Empty(Node *head);

/**
 * @brief Frees the memory of a singly linked list.
 * 
 * @param head The head of the linked list.
 */
void Free_sll(Node *head);

void Push();
void Delete_First_Node(Node *head,int position);
void Search();
int Length(Node *head);
int Length_Input();

char* Is_Empty(Node* head);
int Get_Number();
const char* Get_Time();
void Write_Log(Node *head);

#endif