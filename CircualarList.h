//
// Created by ubuntu on 02/07/22.
//

#ifndef CIRCULARLIST_CIRCUALARLIST_H
#define CIRCULARLIST_CIRCUALARLIST_H


struct Node{
    char Item;            //Nodo
    struct node *next;    //Puntatore al nodo successivo
    _Bool isStarted;
};

//Metodo che controlla se la lista è vuota
_Bool isEmpty (struct Node *headNode);
//Print the list
void printList();
//Insert an element in the list
void insert(char node);
//delete an element from the list
void elimination(char node);
//Shifta di x posizioni la lista circolare
void shift_positions(int x);

#endif //CIRCULARLIST_CIRCUALARLIST_H
