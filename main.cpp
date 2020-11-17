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

    return;

    /* INSERT YOUR CODE HERE -> END*/
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

    fnRemoveDupVals(head);

    //Print linked list values in sequence
    node_t * current = head;
    while (current != NULL) {
        cout<<current->value<<endl;
        current = current->next;
    }

    //For this exercise purpose, don't worry about freeing memory

    return 0;
}