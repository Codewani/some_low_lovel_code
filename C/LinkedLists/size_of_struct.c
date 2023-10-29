#include <stdio.h>
typedef struct Node{
    int data;
    struct Node* next;
} Node;

int main(){
    printf("The size of struct Node is: %zu", sizeof(Node));
    return(0);
}
