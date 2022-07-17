#include "hashTable.h"
#include <stdio.h>
#include <stdlib.h>

hash_table* ht_init(int (*f)(int)){
    hash_table *ht = malloc(sizeof(hash_table));
    ht -> table = calloc(100 , sizeof(hash_node*));
    ht -> size = 0;
    ht -> capacity = 100;
    ht -> hash = f;
    return ht;
}


void destroy_table(hash_table *ht) {
    for(int i = 0; i < ht -> size; i++){
        hash_node *current = ht -> table[i];
        while(current != NULL){
            hash_node *next = current -> next;
            free(current);
            current = next;
        }
    }
    free(ht);
}


void add_node(hash_table *ht , int value){
    int index = ht -> hash(value);
    hash_node *current = ht -> table[index];
    hash_node *new_node = malloc(sizeof(hash_node));
    new_node -> value = value;
    new_node -> next = NULL;
    new_node -> prev = NULL;
    if(current == NULL){
        current = new_node;
        return ;
    }
    while(current -> next)
        current = current -> next;
    current -> next = new_node;
    new_node -> prev = current;
}