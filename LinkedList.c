#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct MyNode {
    int p;
    char x;
    struct MyNode* nx;
};

// Function to insert a new node at the end of the list
struct MyNode* ghusaoAtEnd(struct MyNode* l1, int k, char m)
{ 
    struct MyNode* newNode = (struct MyNode*)malloc(sizeof(struct MyNode));
    newNode->p = k;
    newNode->x = m;

    if (l1 == NULL) {
        // If the list is empty, make the new node the only node
        l1 = newNode;
        newNode->nx = newNode; // Point to itself
    } else {
        // Add the new node to the end
        newNode->nx = l1->nx;  // newNode points to first
        l1->nx = newNode;      // old last points to new
        l1 = newNode;          // new node becomes the last
    }

    return l1; // Return the updated last pointer
}

// Function to display the circular linked list
void display(struct MyNode* l)
{
    if (l == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct MyNode* temp = l->nx; // Start from the first node

    do {
        printf("(%d, %c) -> ", temp->p, temp->x);
        temp = temp->nx;
    } while (temp != l->nx);   

    printf("(back to start)\n");
}

int main()
{
    struct MyNode* l2 = NULL; // Initialize empty list

    // Insert nodes at the end with int + char
    l2 = ghusaoAtEnd(l2, 10, 'A');
    l2 = ghusaoAtEnd(l2, 20, 'B');
    l2 = ghusaoAtEnd(l2, 30, 'C');

    // Display the circular linked list
    printf("Circular Linked List: ");
    display(l2);

    return 0;
}
