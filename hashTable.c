#include "hashTable.h"
#include <stdio.h>
#include <stdlib.h>

int create_table(hash_table *h_table , int(*f)(int)) {
    h_table = malloc(sizeof(hash_table));
    h_table -> table = malloc(sizeof(hash_node) * 100);
    h_table -> hash = f;
    h_table -> size = 10;
    h_table -> capacity = 100;
}
