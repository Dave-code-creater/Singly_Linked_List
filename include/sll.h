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
Node *Create_Node(int value);
Node *Creating_Sll(int length);

Node* Insert_At_Head(Node *head,Node *tmp);
void Insert_At_Middle(Node *head,Node *tmp,int position);
void Insert_At_Tail(Node *head,Node* tmp);

void Printing_Sll(Node *head);
void Priting_Inverse_Sll(Node *head);
void Free_sll(Node *head);


void Push();
void Delete_First_Node(Node *head,int position);
void Search();
Node* Sort_ASC(Node* head);
Node* Sort_DESC(Node* head);

int Length(Node *head);
int Length_Input();

char* Is_Empty(Node* head);
int Get_Number();
const char* Get_Time();
void Write_Log(Node *head);

#endif