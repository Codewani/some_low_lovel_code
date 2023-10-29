#include <stdio.h>
typedef struct Node{
    int x;
    struct Node* next;
} Node;
//linked lists can be scattered around memory
int main(){
    //"elem2 is used be because memory has not been dynamically allocated yet
    Node root;//, elem2;
    root.x = 15;
    //root. next = &elem2;
    /* elem2.x = -2;
     * elem2.next = NULL;
     */
    root.next = malloc(sizeof(Node));
    root.next -> x = -2;
    root.next -> next = NULL;


    printf("The first element is: %d \n", root.x);
    printf("The second element is: %d", root.next->x);

    free(root.next);

    return 0;
}
