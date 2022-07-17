#include <stdio.h>
#include "hashTable.h"

int hash(int x) {
	return x % 100;
}

int main(int argc , char **argv){
	hash_table *h = ht_init(&hash);
	destroy_table(h);
	return 0;
}
