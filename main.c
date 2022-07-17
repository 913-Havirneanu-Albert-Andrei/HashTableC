#include <stdio.h>
#include "hashTable.h"

int hash(int x) {
	return x % 100;
}

int main(int argc , char **argv){
	hash_table *h = ht_init(&hash);
	add_node(h , 101);
	add_node(h , 1);
	printf("%d\n" , search_node(h , 101));
	destroy_table(h);
	return 0;
}
