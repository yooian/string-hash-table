// main.c
#include <stdio.h>

#include "hash_table.h"

int main() {
    ht_hash_table* ht = ht_new();
    ht_insert(ht, "first", "uno");
    printf("%s", ht_search(ht, "first"));

    ht_insert(ht, "sky", "zhaoisdumb");
    printf("%s", ht_search(ht, "sky"));

    ht_delete(ht, "first");
    printf("%s", ht_search(ht, "first"));

    ht_del_hash_table(ht);
}