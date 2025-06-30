#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(Node* node) {
    while (node){
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("null\n");
}

int main() {
    Node* node1 = createNode(1);
    Node* node2 = createNode(5);
    Node* node3 = createNode(9);
    Node* node4 = createNode(7);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    
    printList(node1);

    return 0;

}



