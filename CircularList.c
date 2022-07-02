#include <stdio.h>
#include "CircualarList.h"
#include "malloc.h"

#define MAX_SIZE 8    //costante lunghezza della lista

struct Node *head = NULL;
struct Node *tail = NULL;

_Bool isEmpty(struct Node *headNode){
    return head==NULL;
}

void insert (char a){
    struct Node *newNode= malloc(sizeof (struct Node));

    if(newNode==NULL){
        printf("Impossibile allocare memoria!\n");
    }
    newNode.Item = a;    //assegno all'item di newNode a
}

