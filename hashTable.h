#ifndef HASH_TABLE_H
#define HASH_TABLE_H

typedef struct hash_node {
    hash_node *next , *prev;
    int value;
};

typedef struct hash_table {
    hash_node *table;
    unsigned int size;
    unsigned int capacity;
    int (*hash)(int);
};


int create_table(hash_table *table , int(*f)(int));


#endif

