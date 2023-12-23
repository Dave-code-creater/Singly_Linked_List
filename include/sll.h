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
extern Node *Creating_Sll(int length);
extern Node *Create_Node(int value);

extern Node* Insert_At_Head(Node *head,Node *tmp);
extern void Insert_At_Middle(Node *head,Node *tmp,int position);
extern void Insert_At_Tail(Node *head,Node* tmp);

extern void Printing_Sll(Node *head);
extern void Priting_Inverse_Sll(Node *head);
extern void Free_sll(Node *head);


extern void Push();
extern void Delete_First_Node(Node *head,int position);
extern void Search();
extern Node* Sort_ASC(Node* head);
extern Node* Sort_DESC(Node* head);

extern int Length(Node *head);
extern int Length_Input();

extern char* Is_Empty(Node* head);
extern int Get_Number();
extern const char* Get_Time();
extern void Write_Log(Node *head);

#endif