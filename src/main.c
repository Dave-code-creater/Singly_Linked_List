#include "sll.h"

int main(void)
{
    system("clear");
    int length = Length_Input();

    Node *First = Creating_Sll(length);
    Write_Log(First);

    // Node* Third = Create_Node(129);
    // Node *Second = Create_Node(20);
    // Node* Fourth = Create_Node(30);

    // First = Insert_At_Head(First, Fourth);
    // Insert_At_Middle(First, Second, 2);
    // Insert_At_Tail(First, Third);
    First = Sort_ASC(First);
    // First = Sort_DESC(First);
    

    Printing_Sll(First);
    Write_Log(First);

    Free_sll(First);
}