/**
 * Questão da entrevista para o Instituto Eldorado
 * Question: Implement function fnRemoveDupVals in order to remove duplicates values from an unsorted linked list.
 * Important: You are not allowed to use a temporary buffer.
 */

#include <iostream>
using namespace std;

typedef struct node {
    int value;
    struct node * next;
} node_t;

void fnRemoveDupVals(node_t * pHead){
    /* INSERT YOUR CODE HERE -> START*/
    struct node *pointer1 = NULL, *pointer2 = NULL, *duplicate = NULL;
    pointer1 = pHead;

    while(pointer1 != NULL && pointer1->next != NULL){
        printf("Número: %d\n", pointer1->value);
        pointer2 = pointer1;
        printf("Próximo: %d\n", pointer2->next->value);
        while (pointer2->next != NULL){
            printf("Comparando %d com %d\n", pointer1->value, pointer2->next->value);
            if (pointer1->value == pointer2->next->value){
                printf("Duplicado!!!\n");
                duplicate = pointer2->next;
                pointer2->next = pointer2->next->next;
                delete(duplicate);
            }else{
                printf("Indo para o próximo...\n");
                pointer2 = pointer2->next;
            }
        }
        printf("Movendo o pivo...\n");
        pointer1 = pointer1->next;
    }
    /* INSERT YOUR CODE HERE -> END*/
}

/* Function to print nodes in a given linked list */
void printList(node * node)
{
    cout << "Lista original: ";

    while (node != NULL) {
        cout << node->value << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    node_t * head = NULL;

    int max;
    cin>>max;
    node_t * previous;
    for (int i = 0; i < max; i++){
        node_t * thisNode = (node_t *) malloc(sizeof(node_t));
        cin>>thisNode->value;
        thisNode->next = NULL;
        if (i == 0)
            head = thisNode;
        else
            previous->next = thisNode;
        previous = thisNode;
    }

    printList(head);

    fnRemoveDupVals(head);

    //Print linked list values in sequence
    node_t * current = head;
    cout << "Lista modificada: ";
    while (current != NULL) {
        cout<<current->value<<endl;
        current = current->next;
    }

    //For this exercise purpose, don't worry about freeing memory

    return 0;
}