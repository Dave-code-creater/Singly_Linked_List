#include "sll.h"

int main(void) {
    system("clear");
    int length = LengthInput();

    Node* first = CreateSll(length);
    WriteLog(first);

    // Node* third = CreateNode(129);
    // Node* second = CreateNode(20);
    // Node* fourth = CreateNode(30);

    // first = InsertAtHead(first, fourth);
    // InsertAtMiddle(first, second, 2);
    // InsertAtTail(first, third);
    first = SortAsc(first);
    // first = SortDesc(first);

    PrintSll(first);
    WriteLog(first);

    FreeSll(first);
    return 0;
}
