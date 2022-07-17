#ifndef HASH_TABLE_H
#define HASH_TABLE_H
#include <stdbool.h>

typedef struct hash_node {
    struct hash_node *next;
    struct hash_node *prev;
    int value;
}hash_node;


typedef struct hash_table {
    hash_node **table;
    unsigned int size;
    unsigned int capacity;
    int (*hash)(int);
}hash_table;


hash_table* ht_init(int (*f)(int));

void destroy_table(hash_table *ht);

void add_node(hash_table *ht , int value);

bool search_node(hash_table *ht , int value);

#endif

