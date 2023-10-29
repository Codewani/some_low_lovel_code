#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int x;
    struct Node* next;
} Node;

int main(){
    Node* root = malloc(sizeOf(Node));
    root -> x = 15; // value of x of the first element
    root -> next = NULL;
    for (Node* curr = root; curr != NULL; curr = curr -> next){
        printf("curr value of x is %d \n", curr->x);
    }

    insert_end(&root, -2);
    insert_end(&root, 11);
    return 0;
}
void insert_end(Node** root, int value){
    Node* new_node = malloc(sizeOf(Node));
    if (new_node == NULL){
        exit(1);
    }
    new_node -> next = NULL;
    new_node -> x = value;

    if (*root == NULL){
        *root = new_node;
        return;
    }

    Node* curr = *root;
    while(curr -> next != NULL){
        curr = curr -> next;
    }//this loops through all the lists until it finds the last one "the one with a NULL value of next".

    curr -> next = new_node;
}

