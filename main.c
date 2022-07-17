#include <stdio.h>
#include "hashTable.h"

int hash(int x) {
	return x % 100;
}

int main(int argc , char **argv){
	hash_table *h = ht_init(&hash);
	add_node(h , 101);
	add_node(h , 1);
	add_node(h , 203);
	add_node(h , 69);
	add_node(h , 30);
	add_node(h , 130);
	remove_node(h , 101);
	remove_node(h , 130);
	remove_node(h , 1);
//	printf("%d\n\n\n" , h -> table[1] -> value); 
	print_ht(h);
	destroy_table(h);
	return 0;
}
