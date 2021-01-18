#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "data.h"


Key *key_construct(char *in_name, int in_id) {
    Key *key;
    key = (Key *)malloc(sizeof(Key));
    key -> id = in_id;
    key -> name = strdup(in_name);
    return key;
}


int key_comp(Key key1, Key key2) {
    if (strcmp(key1.name,key2.name)==0&&key1.id == key2.id) return 0;
    else if(strcmp(key1.name,key2.name)<0) return -1;
    else if(strcmp(key1.name,key2.name)==0&&key1.id < key2.id) return -1;
    else return 1;
}


void print_key(Key *key) {
    printf("(%10s     %10d)", (*key).name, (*key).id);
}


void print_node(Node node) {
    print_key(node.key);
    printf("    %d\n",node.data);
}

