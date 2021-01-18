#include <stdio.h>
#include <stdlib.h>
#include "bst.h"



BStree bstree_ini(int size) {
    BStree bstree;
    bstree =(BStree)malloc(sizeof(BStree_struct));
    bstree->tree_nodes = (Node*)malloc((size+1)*sizeof(Node));
    bstree->size =size;
    bstree->is_free = (unsigned char*)malloc((size+1)*sizeof(unsigned char));
    for(int i = 0;i<size+1;i++){
        bstree->is_free[i] = '1';
    }
    return bstree;
}


int insert_helper(BStree bst,int i,Node node);
void bstree_insert(BStree bst, Key *key, int data) {
    Node node;
    node.data = data;
    node.key = key;
    int i = 1;
    i = insert_helper(bst,i,node);
    if(i == -1){
        printf("the node is out of array, we need to expand some space.\n");
    }
    else if(i == 0){
        printf("duplicate key.\n");
    }
    else{
    bst->tree_nodes[i] = node;
    bst->is_free[i]='0';
    printf(" insert suscessfully.\n");
    }
}


void traversal_helper(BStree bst,int i);
void bstree_traversal(BStree bst) {
    traversal_helper(bst,1);
}



void bstree_free(BStree bst) {
    free(bst -> tree_nodes);
    free(bst -> is_free);
    free(bst);
}

void traversal_helper(BStree bst,int i){
    if(bst->is_free[i]!='1'){
        traversal_helper(bst, 2*i);
        print_node(bst->tree_nodes[i]);
        traversal_helper(bst, 2*i+1);
    }
}

int insert_helper(BStree bst,int i,Node node){
    if(i>(bst->size)) return -1;
    if(bst->is_free[i]=='1') return i;
    else{
        if(key_comp(*(bst->tree_nodes[i].key),*(node.key))==0){
            return 0;
        }
        else if(key_comp(*((bst->tree_nodes[i]).key),*(node.key))<0)
            return insert_helper(bst, 2*i+1,node);
        else
            return insert_helper(bst, 2*i,node);
    }
    
}

