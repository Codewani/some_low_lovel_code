#include <stdio.h>
typedef struct Node{
    int x;
    struct Node* next;
} Node;
//linked lists can be scattered around memory
int main(){
    //"elem2 is used be because memory has not been dynamically allocated yet
    Node root;// first element
    root.x = 15; // value of x of the first element
    //root. next = &elem2;
    /* elem2.x = -2;
     * elem2.next = NULL;
     */
    root.next = malloc(sizeof(Node)); // pointer to allocated space for Node 2
    root.next -> x = -2;
    root.next -> next = malloc(sizeof(Node)); // pointer to allocated space for Node 3
    root.next -> next -> x = 20; // dereference memory location of Node 3, "root.next -> next" and set its value of x = 20
    root.next -> next -> next = malloc(sizeof(Node));//pointer to allocated memory space for Node 4
    root.next -> next -> next -> x = 40;// dereference memory location of Node 4, "root.next -> next -> next" and set its value of x = 40
    root.next -> next -> next -> next = NULL;// NULL indicates node 4 is the last node

    //Node* curr = &root;
    //using while loop
    /* while (curr != NULL){
     * //this loop will keep setting the value of curr to the next list until next is NULL
     *  printf("curr value of x is %d \n", curr->x);
     *  curr = curr->next;
     *
     *    }
     */
    //using for loop
    for (Node* curr = &root; curr != NULL; curr = curr -> next){
        printf("curr value of x is %d \n", curr->x);
    }

    //printf("The first element is: %d \n", root.x);
    //printf("The second element is: %d", root.next->x);
    free(root.next -> next -> next);
    free(root.next -> next);
    free(root.next);

    return 0;
}
