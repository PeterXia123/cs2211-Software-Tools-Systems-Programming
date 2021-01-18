#include <stdlib.h>
#include <stdio.h>
#include "bstree.h"
//Allocate memory of type BStree node*, set the value to NULL, and return a pointer to the allocated memory.
BStree bstree_ini(void){
    BStree bst;
    bst = (BStree)malloc(sizeof(BStree_node*));
    *bst = NULL;
    return bst;
}


//insert the data into bstree.
void bstree_insert_helper(BStree_node* pointer,BStree_node* prev,char cha, Key key, Data data);
void bstree_insert(BStree bst, Key key, Data data){
    if(*bst== NULL){
      *bst = new_node(key, data);
    }
    else{
        bstree_insert_helper(*bst,*bst,'c', key, data);
    }
}

// use helper function to do the recursion 
void bstree_insert_helper(BStree_node* pointer,BStree_node* prev,char cha, Key key, Data data){
    if(pointer == NULL){
        if(cha == 'l'){
            prev->left =new_node(key, data);
        }
        else if(cha == 'r'){
            prev->right =new_node(key,data);
        }
    }
   
    else {
        if ( key_comp(key, pointer->key) < 0 )
            bstree_insert_helper(pointer->left,pointer,'l',key, data);
        else if ( key_comp(key, pointer->key) > 0 )
            bstree_insert_helper(pointer->right,pointer,'r', key, data);
        else
            return;
            
        
}
}


//create an new node.
BStree_node *new_node(Key key, Data data){
    BStree_node*  newnode;
    newnode = (BStree_node*) malloc(sizeof(BStree_node));
    newnode->left = NULL;
    newnode->right= NULL;
    newnode->data =data;
    newnode->key =key;
    return newnode;
}



////If key is in bst, return key connected data, if not in the bstree, return null.
Data bstree_search_helper(BStree_node* pointer ,Key key);
Data bstree_search(BStree bst, Key key){
    return bstree_search_helper(*bst, key);
}
//the helper function for the search functino
Data bstree_search_helper(BStree_node* pointer ,Key key){
    if(pointer == NULL){
        return NULL;
    }
    else{
        if (key_comp(key, pointer->key) < 0 ){
            return bstree_search_helper(pointer->left,key);
        }
        else if(key_comp(key, pointer->key) > 0){
            return bstree_search_helper(pointer->right,key);
        }
        else {
            return pointer->data;
        }
    }
}



//In order traversal of bst and print each node's key and data.
void bstree_traversal_helper(BStree_node* pointer);
void bstree_traversal(BStree bst){
bstree_traversal_helper(*bst);
}
// the helper of traversal.
void bstree_traversal_helper(BStree_node* pointer){
    if(pointer == NULL){
        return;
    }
    bstree_traversal_helper(pointer->left);
    key_print(pointer->key);
    
    data_print(pointer->data);
    bstree_traversal_helper(pointer->right);
}


// to free the momoery of tree node and the bstree
void bstree_free_helper(BStree_node* pointer);
void bstree_free(BStree bst){
    bstree_free_helper(*bst);
    
}

//the helper function anout free.
void bstree_free_helper(BStree_node* pointer){
    if (pointer == NULL) return;
    bstree_free_helper(pointer->left);
    bstree_free_helper(pointer->right);
    free(pointer->key);
    free(pointer->data);
    free(pointer);
}


