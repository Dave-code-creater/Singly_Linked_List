# Singly Linked List (SLL) Functions

This C project provides a set of functions for working with singly linked lists. The functions allow you to perform various operations on singly linked lists, such as creating a linked list, printing its elements, calculating its length, and printing the list in reverse order. Whether you're a beginner learning the basics of linked lists or an experienced programmer dealing with more complex list operations, this project equips you with essential tools to work seamlessly with singly linked lists in the C language.

## Table of Contents

-   [Overview](#overview)
-   [Requirements](#requirements)
-   [Usage](#usage)
-   [Functions](#functions)
-   [Automation](#automation)
-   [Advanced Usage](#advanced-usage)
-   [Contributing](#contributing)
-   [License](#license)

## Overview

This project offers a comprehensive toolkit of singly linked list functions in C programming. These functions empower you to execute a multitude of singly linked list-related tasks effortlessly. You can initialize a singly linked list, read and display its contents, compute its length, and print the list in reverse order.

## Requirements

To use the provided functions, you need the following:

-   C Compiler: A C compiler is essential to compile and execute the C code. Recommended options include GCC (GNU Compiler Collection), which is available for various platforms, including Linux, macOS, and Windows (through MinGW or other ports).

-   Text Editor or IDE: You'll require a text editor or integrated development environment (IDE) to edit and manage your C code. Some popular choices include Visual Studio Code, Code::Blocks, or Dev-C++.

-   Operating System Compatibility: Ensure that your chosen development environment and C compiler are compatible with your operating system (Linux, macOS, Windows, etc.).

-   Standard C Library: Your code relies on standard C library functions, which are typically included with most C compilers. No additional libraries should be necessary for this project.

## Usage

1. Clone or Download the Project: Clone or download the project to your computer using the provided link.

2. Change directory to the Singly_Linked_List

3. Executing the following command

```shell
    make
    cd build/
    ./sll
```

Another way:

1. Clone or Download the Project: Clone or download the project to your computer using the provided link.

2. Executing a bash file by give it permision

```shell
    ./run.sh
```

Customize for Your Project: If desired, customize the functions or adapt them to your specific project requirements or linked it into your program if need it as dynamic library.

## Functions

The project includes the following functions:

The project includes the following functions:

-   `Node *Creating_Sll(int length)`: Function to create a singly linked list with a specified number of nodes.
-   `void Free_sll(Node *head)`: Function to free the memory allocated for a singly linked list.
-   `Node* Create_Node(int value)`: Function to create a new node with a given value.
-   `void Printing_Sll(Node *head)`: Function to print the elements of a singly linked list.
-   `int Length(Node *head)`: Function to calculate the length of a singly linked list.
-   `void Priting_Inverse_Sll(Node *head)`: Function to print the elements of a singly linked list in reverse order.
-   `Node* InsertAtHead(Node* head, Node* tmp)`: Function to insert a node at the head of the linked list.
-   `void InsertAtMiddle(Node* head, Node* tmp, int position)`: Function to insert a node at a specified position in the linked list.
-   `void InsertAtTail(Node* head, Node* tmp)`: Function to insert a node at the tail of the linked list.
-   `Node* SortAsc(Node* head)`: Function to sort the elements of the linked list in ascending order.
-   `Node* SortDesc(Node* head)`: Function to sort the elements of the linked list in descending order.
-   `char* IsEmpty(Node* head)`: Function to check if the linked list is empty.
-   `void DeleteNode(Node* head, int value)`: Function to delete a node with the specified value from the linked list.
-   `void WriteLog(Node* head)`: Function to write the execution log to a file.
-   `int GetNumber()`: Function to read a positive integer from the user.

## Automation

Dowload the package and run the shell scripts. I overwrite the file with chmod +x. You feel free to change if need.

```shell
./run.sh
```

## Advanced Usage

This project is open for further development. You can add additional functions and features to suit your specific requirements. Feel free to customize and extend the project according to your needs.

## Contributing

If you'd like to contribute to this project, feel free to fork it, make improvements, and submit a pull request. Contributions such as additional features, better error handling, or improved documentation are welcome.

## License

This project is licensed under the GNU GENERAL PUBLIC LICENSE.

Please review the README file and make any necessary adjustments to fit your requirements.

## Example usage:

```
#include <stdio.h>
#include "sll.h"

int main()
{
    Node *head = Creating_Sll(5); // Create a singly linked list with 5 nodes
    Printing_Sll(head); // Print the singly linked list
    Priting_Inverse_Sll(head); // Print the singly linked list in reverse
    int length = Length(head); // Calculate the length of the list

    // You can call other functions and perform operations on the singly linked list here.

    Free_sll(head);  // Free the memory allocated for the list
    return 0;

}
```
